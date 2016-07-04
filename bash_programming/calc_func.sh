#!/bin/bash

add(){
	num1=$1
	num2=$2
	let result=$num1+$num2
	echo $result
}

sub(){
	num1=$1
	num2=$2
	let result=$num1-$num2
	echo $result
}

mul(){
	num1=$1
	num2=$2
	let result=$num1*$num2
	echo $result
}

div(){
	num1=$1
	num2=$2
	let result=$num1/$num2
	echo $result
}

read -p "Enter two numbers and operation: num1 operation num2: " num1 op  num2

case $op in
+) add $num1 $num2
	;;
-) sub $num1 $num2
	;;
\*) mul $num1 $num2
	;;
/) div $num1 $num2
	;;
*) echo "Invalid operator"
esac
