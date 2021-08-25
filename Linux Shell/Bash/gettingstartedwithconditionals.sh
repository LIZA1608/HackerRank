#!/bin/bash

read char
case $char in
	Y|y) echo "YES"
	;;
	N|n) echo "NO"
	;;
	*) echo "Invalid"
	;;
esac
