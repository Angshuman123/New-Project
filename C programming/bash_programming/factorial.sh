#!/bin/bash

read -p "Enter the number" num
var=1

while [ $num -gt 0 ]
do
	let var=$num\*$var
	let num=$num-1
done
echo "The factorial is: $var"
