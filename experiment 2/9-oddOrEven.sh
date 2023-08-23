#Warren Dmello
#Check whether the entered number is odd or even.
#!/bin/bash
echo Enter a number
read num
if [ `expr $num % 2` -ne 0 ]
then
	echo $num is odd
else
	echo $num is even
fi
