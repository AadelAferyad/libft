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
	int i;	
	printf("------ isalnum test cases ------\n\n");
	int	j = -127;
	while (j < 250)
	{
		i = checker(j);
		j++;
	}
	checker(357);
	checker(1073);
	return (0);
}
