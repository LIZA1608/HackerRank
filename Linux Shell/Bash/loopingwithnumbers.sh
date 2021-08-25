#!/bin/bash

count=1
while [ $count -lt 51 ]
do
	echo "$count"
	count=`expr $count + 1 `
done
