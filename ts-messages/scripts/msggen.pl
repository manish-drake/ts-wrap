#!/usr/bin/perl 

use Getopt::Long;
use strict qw(vars);
#use diagnostics;

use FindBin qw($Bin);
use lib "$Bin";
use File::Basename;
use pygen;
require msgparse;
my $PythonOutput=0;
my $infile;
my $linenumber;
my $MessageFormatVersion=0;
my $Destination=0;

##toComplete
#sub getStringConverter
#{
#    my $type=shift;
#    my $varname=shift;
#    if( $type eq "int"  ||
#        $type eq "unsigned int"  ||
#        $type eq "unsigned long long int"  ||
#        $type eq "short unsigned int"  ||
#        $type eq "float"  ||
#        $type eq "double")
#    {
#       return "std::to_string($varname)";
#    }
#    elsif ($type eq "bool")
#    {
#        return "${name}?"true";"false";
#    }
#}


our %typemap=
(
    "String" => "std::string",
    "Int" => "int",
    "UInt" => "unsigned int",
    "UInt64" => "unsigned long long int",
    "UShort" => "short unsigned int",
    "Short" => "short int",
    "Float" => "float",
    "Double" => "double",
    "Bool" => "bool",
    "Array" => "std::vector"
);

sub printClassMembers
{
    my $fh=shift;
    print $fh "    const int mFormatVersion = $MessageFormatVersion;\n";
#    for my $name (getVars())
#    {
#        my $typename=getNativeTypeByName($name);
#        if ("$typename"  eq "std::vector")
#        {
#            print $fh "    ${typename}<".getArrayTypeByName($name)."> m${name};\n";
#        }
#        else
#        {
#            print $fh "    ${typename} m${name};\n";
#        }
#    }
    print $fh "    char* json_string;\n \n";
}
#*******************************************************************
sub printMemberFunctions
{

    my $fh=shift;

    ############################################
    #Print set/get functions for message members
    for my $name (getVars())
    {
        my $nativetype;
        my $typename=getTypeByName($name);
        #set<name>
        if ($typename eq "Array")
        {
            $nativetype=getNativeTypeByName($name) . "<" . getArrayTypeByName($name) . ">" ;
            print $fh "    void set${name}($nativetype& value)\n"; #function name and args
        }
        else
        {
            $nativetype=getNativeTypeByName($name);
            print $fh "    void set${name}($nativetype value)\n"; #function name and args
        }

        print $fh "    {\n";

        print $fh "        write(\"${name}\",value);\n";
        print $fh "    }\n\n";
      

        ###########################################
        #get<name>
        if (getTypeByName($name) eq "Array")
        {
            print $fh "    $nativetype get${name}(std::vector<",getArrayTypeByName($name),"> arr)\n\n";   #function name
            print $fh "    {\n";
            print $fh "        return getArray(\"${name}\",arr);\n";
        }
        else
        {
            print $fh "    $nativetype get${name}(void)\n\n";   #function name
            print $fh "    {\n";
            print $fh "        return get",getTypeByName($name),"(\"${name}\");\n";
        }


        print $fh "    }\n\n";


        ###########################################
        #is<name>Valid
        print $fh "    bool is${name}Valid(void)\n";
        print $fh "    {\n";
        print $fh "        return isValid(\"${name}\");\n\n";
        print $fh "    }\n\n";
    }

}
#*******************************************************************
sub printMessageFunctions
{
    
    my $fh=shift;
    #########################################
    #Set the JSON object with an incoming JSON string 
    print $fh "    void setMessage(std::string jsonstring)\n";
    print $fh "    {\n\n";

    print $fh "        TServerMessage::setMessage(jsonstring);\n";

    print $fh "\n"; 
    print $fh "    }\n\n";


    #Set the JSON object, so it's values can be retrieved
    print $fh "    void set(Json::Value obj)\n";
    print $fh "    {\n\n";

    print $fh "        TServerMessage::set(obj);\n";

    print $fh "\n"; 
    print $fh "    }\n\n";



    #
    #write getMessage()
    print $fh "    std::string getMessage(void)\n";
    print $fh "    {\n";
    print $fh "        return TServerMessage::getMessage();\n";
    print $fh "    }\n\n";
    
#  Write get() 

    print $fh "    Json::Value get(void)\n";
    print $fh "    {\n";
    print $fh "        return TServerMessage::get();\n";
 
    print $fh "    }\n\n";


}
#*********************************************************************
sub printClass
{
    my $fh=shift;
    my $classname=shift;
    my $cmdid=shift;

    print $fh "class C${classname}:public TServerMessage\n"; 
    print $fh "{\n";
   
    printClassMembers($fh); 
   
    print $fh "public:\n";
    print $fh "    static const unsigned int mCmdID=",sprintf("0x%x",${cmdid}),";\n";

    print $fh "    C${classname}(void)\n";
    print $fh "    {\n";
    print $fh "        setCmdID(mCmdID);\n";
    print $fh "    }\n";

    print $fh "    C${classname}(Json::Value obj):TServerMessage(obj)\n";
    print $fh "    {\n";
    print $fh "        set(obj);\n";
    print $fh "        setCmdID(mCmdID);\n";
    print $fh "    }\n";





    printMemberFunctions($fh);
    printMessageFunctions($fh);
}
#*********************************************************************
sub endClass
{
    my $fh=shift;
    my $classname=shift;

    print $fh "};\n\n\n";
    print $fh "\n\n#endif";
}

#*********************************************************************
sub printCPP
{
    my $fh=shift;
    my $classname=shift;
    
    print $fh "\n\n\n";
    print $fh "#include ${classname}.h\n\n\n"
}
#*********************************************************************
sub createClassFile
{
    my $classname=shift;
    my $cmdid=shift;

    my $classfileheader="$classname.h";
    my $classfile="$classname.cpp";

    if (!open(CLASSHEADER,">$classfileheader"))
    {
        print "Unable to open Class file header: $classfileheader\n";
        exit(1);
    }
    if (!open(CLASSFILE,">$classfile"))
    {
        print "Unable to open Class file header: $classfileheader\n";
        exit(1);
    }
    
    #Create a blank .cpp file
	print CLASSFILE "#include \"${classfileheader}\"\n";

    printIncludes(*CLASSHEADER,$classname);
    printClass(*CLASSHEADER,$classname,$cmdid);
    endClass(*CLASSHEADER,$classname);
   
    close CLASSHEADER;
    close CLASSFILE;


}
#*********************************************************************8
sub getMembers
{
    while(<$infile>)
    {
        $linenumber++; 
        if (/^#/)
        { 
            next;
        }
        chomp();
        if (/^end/)
        {
            last;
        }
        if (/(.*?)#(.*)/)
        {
            $_=$1;
        }
        if (length($_))
        {
            if (/\s+(\S+)\s+(\S+)\s+(\S+)/)
            {
                if ($2 ne "Array")
                {
                    printf("Invalid format at line %d\n",$linenumber);
                    printf("%s\n",$_);
                }
                
                #$1=name $2=type=array,$3=array element type
                if (!isValidType($3))
                {
                    printf("Line: %d Invalid field type \"%s\"",$linenumber,$3);    
                    printf("%s\n",$_);
                    next;    
                }
                setType($1,$2,$3); 
            }
            elsif (/\s+(\S+)\s+(\S+)/)
            {
               #$1=name $2=type
                if (!isValidType($2))
                {
                    printf("Line: %d Invalid array element type \"%s\"",$linenumber,$2);    
                    printf("%s\n",$_);
                    next;    
                }
                setType($1,$2); 
            } 
                    
        }
    }
}

#*********************************************************************8
sub findEntry
{
    while(<$infile>)
    {
        $linenumber++;
        if (/^\s*#/)
        { 
            next;
        }
        if (/^Message\s+(\S+)\s+(\S+)\s+#?.*$/)
        {
            return ($1, hex($2),undef); #Don't need 3rd arg (TS/UI) 
        }
        elsif (/^Message\s+(\S+)\s+(\S+)\s+(\S+)\s*#?/)
        {
            return ($1, hex($2),$3); #Don't need 3rd arg (TS/UI) 
        }
        elsif (/^(Version|Destination)\s+(\S+)\s*#*/)
        {
            return ($1,hex($2));
        } 

    }
    return (undef,undef);
}
#*********************************************************************8
sub printClassHeader
{
print CLASSES_H  "#ifndef __classes_h\n";
print CLASSES_H "#define __classes_h\n";
print CLASSES_H "\n\n";
}


#my $result=GetOptions('-directory=s'=>\$TargetDir,'r=s'=>\$rev,'la'=>\$List,'norecurse'=>\$NoRecurse,'ld'=>\$ListDiff,'ls'=>\$ListSame,"i"=>\$Ignore);


if ($#ARGV < 0)
    {
    exit(1);
    }

GetOptions('python' => \$PythonOutput);

my $fname=$ARGV[0];



my $classname;
my $cmdid;
my $PythonMainModule="messageclasses.py";
my $PythonModuleList="pythonmodulefiles.mk";

if (!open($infile,"$fname"))
{

    printf("Unable to open input file $fname\n");
    exit(1);
}

if ($PythonOutput)
{


    if (!open(PYTHONMAINMODULE,">>${PythonMainModule}"))
    {
        printf("Unable to open ${PythonMainModule}\n");
        exit(1);
    }

    if (!open(PYTHONMODULELIST,">>${PythonModuleList}"))
    {
        printf("Unable to open ${PythonModuleList}\n");
        exit(1);
    }
    $linenumber=0;

    $fname=basename($fname);
    $fname=~/(\S+)\.dat/;
    my $wrapperbasename=$1; 
    my $wrapperfuncfilename=$1."\.py";
    if (!open(MSGWRAPPERFILE,">$wrapperfuncfilename"))
    {
        printf("Unable to open ${wrapperfuncfilename}\n");
        exit(1);
    }
    print MSGWRAPPERFILE "import os\n";
    print MSGWRAPPERFILE "import sys\n";
    print MSGWRAPPERFILE "import json\n";
    print MSGWRAPPERFILE "import zmq\n";
    print MSGWRAPPERFILE "from messageclasses import *\n";
    print MSGWRAPPERFILE "from tsclient import *\n";


    while(1)
    {
        my ($name,$value,$replyclass)=findEntry(); #value is message version or CommandID if a message entry
        if (!defined($name))
        {
            last;
        }
        if ("$name" eq "Version")
        {
            printf(MSGWRAPPERFILE "messageversion=0x%04x\n\n",$value);
            next;
        }
        elsif ("$name" eq "Destination")
        {
            printf(MSGWRAPPERFILE "DESTINATION=0x%04x\n\n",$value);
            next;
        }
        else #Message entry
        {
            #printf("%s %d\n",$name, $value);
            getMembers();
            createPythonModule($name,$value,getVars());
            #print PYTHONMAINMODULE "from $name import ${name}\n";
            print PYTHONMAINMODULE "from $name import *\n";



            print PYTHONMODULELIST "${name}.py \\\n";
            #print "${name}.py\n";
            print MSGWRAPPERFILE "def send${name}Message(\n";
            print MSGWRAPPERFILE "         tsconn,\n"; 
            my $first=1;
            for my $name (getVars())
            {
                if (!$first)
                {
                    print MSGWRAPPERFILE ",\n"; #Terminate last parameter
                }

                print MSGWRAPPERFILE "        _${name}"; 
                $first=0;
            }

            if (!$first)
            {
                print MSGWRAPPERFILE "\n        ):\n"; #End of parameter lsit
            }
            else
            {
                print MSGWRAPPERFILE "        ):\n"; #End of parameter lsit
            }
    
            #get appropriate message objec
            print MSGWRAPPERFILE "    msg=${name}()\n";

            for my $name (getVars())
            {
                print MSGWRAPPERFILE "    msg.set${name}(_$name)\n";
            }

            if ($replyclass)
            {
                print MSGWRAPPERFILE "    replyobj=${replyclass}()\n";
                print MSGWRAPPERFILE "    env=tsconn.send(DESTINATION,msg.get())\n";
                print MSGWRAPPERFILE "    replyobj.setObject(env.getMessage())\n";
                print MSGWRAPPERFILE "    return replyobj\n\n\n";
            }
            else
            {
                print MSGWRAPPERFILE "    return(tsconn.send(DESTINATION,msg.get()))\n\n\n";
            }
        }

        clearVars();
    }   
    close PYTHONMAINMODULE;
    close PYTHONMODULELIST;

    #Make sure they're executable
    chmod($PythonMainModule,0755);
    chmod($PythonModuleList,0755);
}
else
{
    if (!open(MSGWRAPPERS_H, ">>msgfunctions.h"))
    {
        printf("Unable to open msgfunctions.h\n");
        exit(1);
    }

    if (!open(CLASSES_H,">>classes.h"))
    {
        printf("Unable to open classes.h\n");
        exit(1);
    }

    if (!open(CPPLISTMK,">>classcppfiles.mk"))
    {
        printf("Unable to open classcppfiles.mk\n");
        exit(1);
    }

    if (!open(HEADERLISTMK,">>classheaderfiles.mk"))
    {
        printf("Unable to open classesheaderfiles.mk\n");
        exit(1);
    }
    $fname=basename($fname);
    $fname=~/(\S+)\.dat/;
    my $wrapperbasename=$1; 
    my $wrapperfuncfilename=$1."\.h";
    if (!open(MSGWRAPPERFILE,">$wrapperfuncfilename"))
    {
        printf("Unable to open ${wrapperfuncfilename}\n");
        exit(1);
    }


    $linenumber=0;
    #printClassHeader(*CLASSES_H);
    #Print wrapp function file header section

    print MSGWRAPPERFILE "#ifndef __${$wrapperbasename}_h\n";
    print MSGWRAPPERFILE  "#define __${$wrapperbasename}_h\n\n";
    print MSGWRAPPERFILE  "#include <stdio.h>\n";
    print MSGWRAPPERFILE  "#include <stdlib.h>\n";
    print MSGWRAPPERFILE  "#include <string>\n";
    print MSGWRAPPERFILE  "#include \"inc/json.h\"\n";
    print MSGWRAPPERFILE  "#include \"classes.h\"\n";
 
    print HEADERLISTMK "${wrapperfuncfilename}\\\n";
    print MSGWRAPPERS_H "#include \"${wrapperfuncfilename}\"\n";
    
    while(1)
    {
        my ($name,$value)=findEntry();
        if (!defined($name))
        {
            last;
        }
        if ($name eq "Version")
        {
            $MessageFormatVersion=$value;
            printf(MSGWRAPPERFILE "const unsigned int MESSAGEVERSION=0x%04x\n",$value);
            next;
        }
        elsif ("$name" eq "Destination")
        {
            printf(MSGWRAPPERFILE "const unsigned int DESTINATION=0x%04x\n",$value);
            next;
        }

        else #Message entry
        {
            #name=classname, value=cmdid
            #printf("%s %d\n",$name, $value);
            getMembers();
            createClassFile($name,$value);
            print CLASSES_H "#include \"${name}.h\"\n";
            print HEADERLISTMK "${name}.h\\\n";
            print CPPLISTMK "${name}.cpp\\\n";

            #PRINT wrapper function prototype
            #Print entry in wrapper function file
            print MSGWRAPPERFILE "\n\nJson::Value message${name}(\n";

            #Print parameter list
            my $first=1;
            for my $name (getVars())
            {
                if (!$first)
                {
                    print MSGWRAPPERFILE ",\n"; #Terminate last parameter
                }
                my $typename=getNativeTypeByName($name);

                if ("$typename"  eq "std::vector")
                {
                    print MSGWRAPPERFILE "        ${typename}<".getArrayTypeByName($name)."> _${name}";
                }
                else
                {
                    print MSGWRAPPERFILE "        ${typename} _${name}";
                }
                $first=0;
            }
            if (!$first)
            {
                print MSGWRAPPERFILE "\n        )\n"; #End of parameter lsit
            }
            else
            {
                print MSGWRAPPERFILE "        )\n"; #End of parameter lsit
            }
          
            #Print Message object local variable 
            print MSGWRAPPERFILE "{\n";
            print MSGWRAPPERFILE "    C${name} msg;\n";
            for my $name (getVars())
            {
                    print MSGWRAPPERFILE "    msg.set${name}(_$name);\n";
            }
            print MSGWRAPPERFILE "    return msg.get();\n";
            print MSGWRAPPERFILE "}\n";
        }


        clearVars();
    }


    close MSGWRAPPERFILE;
    close CLASSES_H;
    close CPPLISTMK;
    close HEADERLISTMK;
} 
