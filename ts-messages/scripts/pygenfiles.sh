
TOPDIR=$1           #Top projrect directory
PYTHONMODULEFILE_INC=$2   #.mk file to containing list of all genreated .py files
PYTHONMAINMODULE=$3
MESSAGEDIR=$4       #Directory to place generated files
MESSAGE_DEF_DIR=$5  #Directory containing message definition files
MESSAGE_DEF_FILES=$6 #List of message definition files


echo "GENPYTHONMODULES:= \\" > ${MESSAGEDIR}/${PYTHONMODULEFILE_INC}
echo ${TOPDIR} 
cd ${TOPDIR}/${MESSAGEDIR}
echo "Creating class files" 
echo "#/usr/bin/python3" >${PYTHONMAINMODULE}
echo "import json" >>${PYTHONMAINMODULE}
for f in ${MESSAGE_DEF_FILES}; do 
    ${TOPDIR}/scripts/msggen.pl -p ${TOPDIR}/${MESSAGE_DEF_DIR}/$f
done

