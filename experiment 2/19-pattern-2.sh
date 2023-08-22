#Warren Dmello
#Pattern-2
#!/bin/bash
n=5
for((i=5;i>0;i--))
do
    for((j=$n-$i+1;j<$n;j++))
    do
        echo -n "$j"
    done
    echo ""
done