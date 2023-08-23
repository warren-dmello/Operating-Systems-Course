#Warren Dmello
#Using switch case print the capitals given the state name.
#!/bin/bash
echo "Enter the state name"
read state
case "$state" in
	"Goa") echo "The capital of Goa is Panjim";;
	"Maharashtra") echo "The capital of Maharashtra is Mumbai";;
	"Karnataka") echo "The capital of Karnataka is Bangalore";;
	"Kerala") echo "The capital of Kerala is Thiruvananthapuram";;
	*) echo "Invalid Input";;
esac
