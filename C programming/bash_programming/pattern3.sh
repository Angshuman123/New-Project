#!/bin/bash

read -p "Enter the number of lines" lines
i=1
linecount=$lines
while [ $i -le $lines ]
do
	spaces=1
	
	while [ $spaces -le $linecount ]
	do
		echo -n " "
		let spaces=$spaces+1
	done
	let linecount=$linecount-1
	j=1
	while [ $j -le `expr 2 \* $i - 1` ]
	do
		echo -n `expr $j \% 2`
		let j=$j+1
	done
	echo
	let i=$i+1
done
