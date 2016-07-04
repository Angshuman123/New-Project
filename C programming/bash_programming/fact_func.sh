#!/bin/bash

fact(){
	num1=$1
	i=1
	result=1
	while [ $i -lt $num1 ]
	do
		let result=$i*$num1
		let i=$i+1
	done
	echo $result
}

read -p "Enter a number" num1
var=$( fact $num1 )
echo "$var"
