#! /bin/sh
RED='\033[0;31m'
CY='\033[0;36m'
GR='\033[0;32m'
PR='\033[0;35m'

NC='\033[0m' # No Color

echo `clear`

if [ -z "$1" ]
  then
    echo ${PR}"\nerr{0} ${CY}::missing::\n"
else
    if [ -z "$2" ]; then
        cp -R -n -p $1/ $1-origin/
        echo ${CY}"\n> files fetched to ${RED}:: ${GR}$1-origin/${NC}\n"
    else 
        cp -R -n -p $1/ $2/
        echo ${PR}"\n> files from ${GR}'$1/'${CY} fetched to: ${GR}'$2/'${NC}\n"
    fi
fi

