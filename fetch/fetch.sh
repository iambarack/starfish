#! /bin/sh
RED='\033[0;31m'
CY='\033[0;36m'
GR='\033[0;32m'
PR='\033[0;35m'

NC='\033[0m' # No Color

echo `clear`

if [ -z "$1" ]
  then
    echo ${PR}"\n> err{0} :: ${CY}missing-parameters\n"
else
    if [ -z "$2" ]; then
        #cp -R -n -p $1/ $1-origin/
        echo ${CY}"\n> err{1} ${RED}:: missing-last-parameter${NC}\n"
    else 
        if [ ! -d $1/  ] || [ ! -d $2/  ]
        then
            echo ${CY}"\n> err{2} ${RED}:: folders-does-not-exist${NC}\n"
        else
            cp -R -n -p $2/ .tmp_$2/
            rsync -avz --update --existing --remove-source-files $1/ .tmp_$2/
            rsync -avz --update --ignore-existing --remove-source-files .tmp_$2/ $2/
            find $1/ -type d -empty -delete
            rm -rf .tmp_$2/
            #cp -R -n -p $1/ $2/
            echo ${PR}"\n> files from ${GR}'$1/'${CY} are isolated to: ${GR}'$2/'${NC}\n"
        fi

    fi
fi

