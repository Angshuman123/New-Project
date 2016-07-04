#!/bin/bash

read -p "Enter two numbers" num1 num2
add(){
	num1=$1
	num2=$2
	return $(($num1+$num2))
}

add $num1 $num2
echo $?
