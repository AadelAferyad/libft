#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(int c)
{
	int a, b;
	printf("--------Test for %d (%c) --------\n", c, c);
	a = isalnum(c);
	b = ft_isalnum(c);
	printf("Expected : %d\n", a);
	printf("Got	 : %d\n", b);
	if ((a && b) || (!a && !b))	
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (a == b? 0 : 1);
}
int	main(void)
{
	
	printf("------ isalnum test cases ------\n\n");
	checker(48);
	checker(49);
	checker(50);
	checker(51);
	checker(52);
	checker(53);
	checker(54);
	checker(55);
	checker(56);
	checker(57);
	checker(97);
	checker('2');
	checker(100);
	checker(0);
	checker(70);
	checker(65);
	checker(-1);
	checker(48);
	checker(20);
	checker(50);
	checker(255);
	checker('\0');
	checker('^');
	checker(1337);
	checker(2024);
	checker(1);
	return (0);
}
