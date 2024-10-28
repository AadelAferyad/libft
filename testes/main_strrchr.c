#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(char *s, int c)
{
	char *a, *b;
	if (!s)
		printf("--------Test for NULL --------\n");
	else
		printf("--------Test for %s searching for (%d)(%c) --------\n", s, c, c);
	if (!s)
		printf("Test for NULL strrchr (should seg fault)\n");
	a = strrchr(s, c);
	if (!s)
		printf("Test for NULL ft_strrchr (should seg fault)\n");
	b = ft_strrchr(s, c);
	if (!a)
		printf("Expected : NULL\n");
	else
		printf("Expected : %s\n", a);
	if (!b)
		printf("GOT : NULL\n");
	else
		printf("Got	 : %s\n", b);
	if (a == b)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (0);
}
int	main(void)
{
	
	printf("------ strrchr test cases ------\n\n");
	checker("hello world", 'h');
	checker("hello world", 'o');
	checker("hello 123 world", ' ');
	checker("hello world", 'l');
	checker("hello world", 'd');
	checker("hello world", 's');
	checker("hello world", 102);
	checker("bcde elasd edasld edsafo", 'e');
	checker("", 'w');
	checker("", 0);
	checker(NULL, 2);
	checker("\0", '\0');
	
	return (0);
}
