#!/bin/bash

TOPDIR=$1           #Top projrect directory
CPPCLASSES_INC=$2   #.mk file containing list of all genreated .cpp files 
HEADERCLASSES_INC=$3 #.mk file containing list of all genreated .h files3
MESSAGEDIR=$4       #Directory to place generated files
MESSAGE_DEF_DIR=$5  #Directory containing message definition files
MESSAGE_DEF_FILES=$6 #List of message definition files


echo "Creating class files" 
echo "GENCPPFILES=\\" > ${CPPCLASSES_INC}
echo "GENHEADERFILES=\\" > ${HEADERCLASSES_INC}
cd ${TOPDIR}/${MESSAGEDIR}
printf "#ifndef __classes_h\n#define __classes_h\n\n" >classes.h 
printf "#ifndef __msgfunctions_h\n#define __msgfunctions_h\n\n" >msgfunctions.h 
echo ${MESSAGE_DEF_FILES}
for f in ${MESSAGE_DEF_FILES}; do 
    ${TOPDIR}/scripts/msggen.pl ${TOPDIR}/${MESSAGE_DEF_DIR}/$f; 
done; 
printf "\n#endif\n" >> classes.h 
printf "\n#endif\n" >> msgfunctions.h 
cd .. 
echo "" >> ${CPPCLASSES_INC}
echo "" >> ${HEADERCLASSES_INC}


