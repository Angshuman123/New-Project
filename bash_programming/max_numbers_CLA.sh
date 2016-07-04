#!/bin/bash

num1=$1
num2=$2
num3=$3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
	echo "Max number is: $num1"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
	echo "Max number is: $num2"
else
	echo "Max number is: $num3"
fi
