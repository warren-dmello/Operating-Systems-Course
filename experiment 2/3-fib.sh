#Warren Dmello
#Generate the fibonacci series for the number of terms entered by the user
#!/bin/bash
echo Enter a number
read n
a=0
b=1
for ((i=0;i<n;i++))
do
	echo $a
	c=`expr $a + $b`
	a=$b
	b=$c
done
