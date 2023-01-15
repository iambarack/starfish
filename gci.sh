#! /bin/sh
RED='\033[0;31m'
CY='\033[0;36m'
GR='\033[0;32m'
PR='\033[0;35m'

NC='\033[0m' # No Color

if [ -z "$1" ]
  then
    echo ${PR}"\nerr{0} ${CY}::missing::\n"
else
    if [ -z "$2" ]
        then
        echo `clear`
    fi
    if [[ $1 == *".c"* ]]; then
        echo ${PR}"::filename:: ${GR}$1\n${NC}";
        gcc $1 && ./a.out
    else
        echo ${PR}"::filename:: ${GR}$1.c\n${NC}";
        gcc $1.c && ./a.out
    fi

    if rm ./a.out ; then
            echo ${CY}"\n"::evaluated:: ${PR}exit*'\n'
    else
            echo ${PR}"\nerr{1} ${CY}::invalidfile::\n"
    fi    
fi

