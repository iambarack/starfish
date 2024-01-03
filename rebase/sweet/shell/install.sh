#! /bin/sh

#find the current shell
cursh=`echo $SHELL`
pattern="/bin/"
cursh=${cursh/$pattern/}
#echo "cursh=${cursh}"

#var=$(cat ~/.${cursh}rc | grep -w "fetch" | wc -l)
if cat ~/.${cursh}rc | grep -w "fetch"; then
    echo "already in ~/.${cursh}rc"
else
    echo "adding to ~/.${cursh}rc"
    echo alias fetch="${PWD}/fetch.sh" >> ~/.${cursh}rc
fi
