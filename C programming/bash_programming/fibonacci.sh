#!/bin/bash

read -p "Enter the number" num
a=0
b=1

echo "Fibonacci series upto $num terms"
while [ $num -gt 0 ]
do
	let sum=$a+$b
	echo $sum
	a=$b
	b=$sum
	let num=$num-1
done
	
