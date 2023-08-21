#Warren Dmello
#Find the factorial of a given number.
#!/bin/bash
echo Enter a number :
read n
fact=1
for ((i=n;i>0;i--))
do
	fact=`expr $fact \* $i`
done
echo Factorial = $fact
