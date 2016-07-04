#!/bin/bash

filename=$1

if [ -f $filename ]
then
	ls -l | awk '{print $6 " " $7 " " $8}'
else
	echo "The file doesn't exist"
fi
