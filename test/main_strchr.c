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
	if (a == &s[ft_strlen(s)])
		printf("\033[0;32m[PASSED]\033[0m\nsame address\n");
	else if((a && b && !strcmp(a, b)) || (a == b))
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
	checker("hello world", '\0');
	checker("hello world", 0);
	checker("", 'w');
	checker("", 0);
	checker("\0", '\0');
	
	char	*a, *b;

	printf("----------------------\n");
        a = strchr("teste", 357) ;
        b = ft_strchr("teste", 357) ;
	printf("Expected : %s\nGot  :%s\n\n", a, b);
        a = strchr("teste", 't') ;
        b = ft_strchr("teste", 't') ;
	printf("Expected : %s\nGot  :%s\n\n", a, b);
        a = strchr("teste", 'e') ;
        b = ft_strchr("teste", 'e') ;
	printf("Expected : %s\nGot  :%s\n\n", a, b);
        a = strchr( "teste", '\0');
        b = ft_strchr( "teste", '\0');
	printf("Expected : %s\nGot  :%s\n\n", a, b);
        a = strchr( "teste", 'a');
        b = ft_strchr( "teste", 'a');
	printf("Expected : %s\nGot  :%s\n\n", a, b);
        a = strchr("teste", 1024) ;
        b  = ft_strchr("teste", 1024) ;
	printf("Expected : %s|\nGot  :%s\n\n", a, b);
	return (0);
}
