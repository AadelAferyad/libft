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
		printf("Test for NULL ft_strchr (should seg fault)\n");
	b = ft_strchr(s, c);
	if (!s)
		printf("Test for NULL strchr (should seg fault)\n");
	a = strchr(s, c);
	if (!a)
		printf("Expected : NULL\n");
	else
		printf("Expected : %s\n", a);
	if (!b)
		printf("GOT : NULL\n");
	else
		printf("Got	 : %s\n", b);
	if ((a && b && !strcmp(a, b)) || (a == b))
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (0);
}
int	main(void)
{
	
	printf("------ strchr test cases ------\n\n");
	checker("hello world", 'h');
	checker("hello world", 'e');
	checker("hello world", ' ');
	checker("hello world", 'l');
	checker("hello world", 'd');
	checker("hello world", 's');
	checker("hello world", 102);
	checker("hello world", 'l');
	checker("", 'w');
	checker("", 0);
	checker(NULL, 2);
	checker("\0", '\0');
	
	return (0);
}
