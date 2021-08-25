#!/bin/sh

count=1
while [ $count -lt 100 ]
do
	echo "$count"
	count=`expr $count + 2`
done
