#!/usr/bin/bash

for f in ft_*
do
	./"$f" > /dev/null 2>&1
	echo "Test for $f"
	if [ $? -eq 0 ]
	then
		echo -e "\e[32m PASS\e[0m"
	else
		echo -e "\e[31m FAILED\e[0m"
	fi
done
