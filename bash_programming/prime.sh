#!/bin/bash

read -p "Enter the number" num

i=2
c=0
while [ $i -lt $num ]
do
	if [ `expr $num \% $i` -eq 0 ]
	then
		c=1;
		break;
	fi
	let i=$i+1
done
if [ $c -eq 0 ]
then
	echo "The number is prime"
else
	echo "The number is not prime"
fi
