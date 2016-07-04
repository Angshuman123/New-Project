#!/bin/bash

num1=$1
op=$2
num2=$3

case $op in

+) let r=$num1+$num2
	echo "$r"
	;;
-) let r=$num1-$num2
	echo "$r"
	;;
\*) let r=$num1*$num2
	echo "$r"
	;;
/) let r=$num1/$num2
	echo "$r"
	;;
*) echo "Unknown opertator"
esac
