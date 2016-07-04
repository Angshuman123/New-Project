#!/bin/bash

fibo(){
	num=$1
	a=0
	b=1
	i=1
	while [ $i -le $num ]
	do
		let c=$a+$b
		echo $c
		a=$b
		b=$c
		let i=$i+1
	done
}

read -p "Enter a number" num
var=$(fibo $num)
echo $var
