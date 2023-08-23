#Warren Dmello
#To reverse a number.
#!/bin/bash
echo Enter a number : 
read num
#x=10
while [ $num -gt 0 ]
do
	lastDigit=`expr $num % 10`
	reverse=`expr $reverse \* 10`
	reverse=`expr $reverse + $lastDigit`
	num=`expr $num / 10`
done
echo Reversed Number = $reverse
