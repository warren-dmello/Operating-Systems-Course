#Warren Dmello
#To reverse a string.
#!/bin/bash
echo -n "Enter a string : "
read str
len=${#str}
rev=""
for((i=$len-1;i>=0;i--))
do
    rev=$rev${str:$i:1}
done
echo $rev
