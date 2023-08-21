#Warren Dmello
#To display square of first 20 numbers
#!/bin/bash
for ((i=1;i<=20;i++))
do
	echo Square of $i is `expr $i \* $i`
done
