#!/bin/bash

read -p "Enter the number of lines" lines
i=1
while [ $i -le $lines ]
do
	j=1
	while [ $j -le $i ]
	do
		echo -n "* "
		let j=$j+1
	done
	echo
	let i=$i+1
done
