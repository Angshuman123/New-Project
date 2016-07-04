#!/bin/bash

var=1
if [ "$var" -gt 0 ] || [ "$var" -eq 10 ]
then
	echo "One or both conditions are true"
else
	echo "Neither one of the conditions is true"
fi

if [ "$var" -gt 0 ] && [ "$var" -eq 10 ]
then
	echo "One or both conditions are true"
else
	echo "Both conditions are false"
fi
