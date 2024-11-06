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
	a = toupper(c);
	b = ft_toupper(c);
	printf("Expected : %d\n", a);
	printf("Got	 : %d\n", b);
	if (a == b)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (a == b? 0 : 1);
}
int	main(void)
{
	
	printf("------ toupper test cases ------\n\n");
	
	int	i = 0;
	while (i < 130)
	{
		checker(i);
		i++;
	}
	checker('2');
	checker(0);
	checker(-1);
	checker(255);
	checker('\0');
	checker('^');
	checker(1337);
	checker(2024);
	checker(-1337);
	checker(357);
	checker(358);
	checker(360);
	return (0);
}
