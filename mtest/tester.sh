#!/usr/bin/bash

for f in main_*.c
do
	cc $f -L ../ ../libft.a  -o main > /dev/null 2>&1

	s=$(echo $f | grep -oP '[^!]+')
	echo "Test for $s"

	./main > /dev/null 2>&1

	if [ $? -eq 0 ]
	then
		echo -e "\e[32m 	PASS\e[0m"
	else
		echo -e "\e[31m		FAILED\e[0m"
		./main
		sleep 5

	fi
done
