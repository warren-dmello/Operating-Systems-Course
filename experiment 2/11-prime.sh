#Warren Dmello
#To print all the prime numbers less than 20.
#!/bin/bash
n=2
while [ $n -le 20 ]
do
    flag=1
    i=2    
    while [ $i -lt $n ]
    do
         rem=`expr $n % $i`
        if [ $rem -eq 0 ]
        then
          flag=0
          break
        fi
    i=`expr $n + 1`
    done
    if [ $flag -eq 1 ]
    then
       echo "$n"
    fi
n=`expr $n + 1` 
done
