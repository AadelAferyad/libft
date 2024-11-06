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
	a = isdigit(c);
	b = ft_isdigit(c);
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
	
	printf("------ isdigit test cases ------\n\n");
	int i = '0';
	while (i < '9')
	{
		checker(i);
		i++;
	}
	checker(0);
	checker(70);
	checker(65);
	checker(-1);
	checker(-12);
	checker(-22);
	checker(-1337);
	checker(48);
	checker(20);
	checker(50);
	checker(255);
	checker('\0');
	checker('^');
	checker(1337);
	checker(2024);
	checker(1);
	checker(357);
	checker(1073);
	return (0);
}
