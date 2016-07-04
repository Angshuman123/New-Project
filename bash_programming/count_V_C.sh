#!/bin/bash

read -p "Enter a sentence: " s
var1=`echo $s | tr -cd 'aAeEiIoOuU' | wc -c`
var2=`echo $s | tr -cd 'bBcCdDfFgGhHjJkKlLmMnNpPQqrRsStTvVwWxXyYzZ' | wc -c`

echo "$var1 vowels"
echo "$var2 consonants"
