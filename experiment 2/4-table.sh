#Warren Dmello
#To print the number table
#!/bin/bash
echo Enter a number : 
read n
for ((i=1;i<=10;i++))
do
	echo $n \* $i = `expr $n \* $i`
done
