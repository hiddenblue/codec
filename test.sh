#!/bin/bash
if [ $1 != "-j" ];
then
    if [ $# -ne 2 ];
    then 
        echo '出错啦' && exit
    fi
    date -s "$1 $2"
fi
    hwclock -w
