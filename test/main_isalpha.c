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
	printf("Test for %d (%c)\n", c, c);
	a = isalpha(c);
	b = ft_isalpha(c);
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
	printf("------ isalpha test cases ------\n\n");
	int	i;
	int	j;

	j = 'Z';
	i = 'A';
	
	while (i <= j)
	{
		if (i == 'Z' && i == j)
		{
			i = 'a';
			j = 'z';
		}
		checker(i);
		i++;
	}
	checker(97);
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
	checker(357);
	return (0);
}
