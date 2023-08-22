#Warren Dmello
#To check if the entered string is palindrome or not.
#!/bin/bash
echo -n "Enter a string : "
read str
len=${#str}
rev=""
for((i=$len-1;i>=0;i--))
do
    rev=$rev${str:$i:1}
done
if [ $rev == $str ]
then
    echo $str "is a palindrome"
else
    echo $str "is not a palindrome"
fi
