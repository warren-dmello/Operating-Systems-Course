#Warren Dmello
#Check Whether given year is leap year or not.
#!/bin/bash
echo Enter a year : 
read year

if [ `expr $year % 4` -eq 0 ]
then
	echo Leap Year
else
	echo Not a Leap Year
fi
