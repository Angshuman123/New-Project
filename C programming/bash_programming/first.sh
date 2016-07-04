#!/bin/bash

echo "Hi there how is it going? What sort of a day are you having? Any good?" #this will print whatever to the screen echo " DO YOU SEE THIS"

echo "Different line"


echo adsfadsfasdf # dafdsfadsf

#assigns the value to the variable name and prints the number of character in value
name=tea

echo "The word $name contains ${#name} chars"

#decimal conversion of the binary number 111
echo $(( 2#111 ))

#checking is var is greater than 0 to demonstrate that ; is use to seperate two commands just like the line  below
echo "hey there"; echo "you there?"

var=10

if [ "$var" -gt 0 ]; then echo "YES"; else echo "NO"; fi

colours="red black white"

echo $colours

#for loop to display colour names
for col in "$colours"
do
	echo $col
done

#single quotes doesn't allow referencing the variables at all
for col in '$colours'
do
	echo $col
done

#comma seperator and the last operation is taken into consideration
let "y=((x=20, 10/2))"

echo $y

#double comma seperator use to convert into lower case and single comma can also be used to convert into lower case but only the first character is converted into lower case
var=DSLCoNneCtIoN

echo ${var,,}

#escape character
echo "\"Linux is awesome\""

#reverse quote `
let value=500/2
echo $value
value2=`echo $value`
echo $value2

#colon : or as in do nothing. Tells the interpreter to do nothing
nvar=20
if [ $nvar -gt 15 ]
then :
else
	echo $nvar
fi

# reverse or negate !
var=10

if [ $var != 0 ]
then
	echo "NOT"
else
	echo "YES"
fi

# ' * ' wild card character and can be used for multiplication also
let var=100*10
let var2=100**2

echo "$var"
echo "$var2"

# ' ? 'this is a test operator
variable1=50

echo $((variable2 = variable1 < 20 ? 10:30))

# () used to run a group of commands and also it opens a subshell also used in array initialization.
#Note:- The variables in the subshell cannot be read by the script.

var=5
(var=10;)

echo $var

colors=(red green white brown)


# {} can be used to forward the output of multiple files into a single file can also help to create a loop without a loop also creates a anonymus function or code sepearator
echo \${red,green,blue,white,brown}\$
echo \"{red,green,blue,white,brown}\"
echo \t{est1,est2}
echo {0..50}

var1=1
var2=2

{
	var1=10
	var2=20
}

echo $var1 $var2

# ^ set all the characters in upper case
someword=angshuman
echo ${someword^^}
