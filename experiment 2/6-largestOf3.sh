#Warren Dmello
#To print the largest of 3 numbers entered by the user.
#!/bin/bash
echo Enter the first number :
read n1
echo Enter the second number :
read n2
echo Enter the third number :
read n3

if [ $n1 -gt $n2 -a $n1 -gt $n3 ]
	then 
	echo $n1 is the greatest
elif [ $n2 -gt $n1 -a $n2 -gt $n3 ]
	then
	echo $n2 is the greatest
else
	echo $n3 is the greatest
fi
