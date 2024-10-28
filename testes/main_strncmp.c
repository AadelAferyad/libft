#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(char *s, char *s1, size_t c)
{
	int 	a, b;
	if (!s || !s1)
		printf("--------Test for NULL --------\n");
	else
		printf("--------Test for %s AND %s for %ld --------\n", s, s1, c);
	if (!s || !s1)
		printf("Test for NULL ft_strchr (should seg fault)\n");
	b = ft_strncmp(s, s1, c);
	if (!s || !s1)
		printf("Test for NULL strchr (should seg fault)\n");
	a = strncmp(s, s1, c);
	printf("Expected : %d\n", a);
	printf("Got	 : %d\n", b);
	if (a == b)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (0);
}
int	main(void)
{
	
	printf("------ strncmp test cases ------\n\n");
	checker("hello world", "hello world", 13);
	checker("hello world", "hello world", 9);
	checker("hello world", "hello world", 5);
	checker("hello world", "hello world", 1);
	checker("hello world", "hello world", 0);
	checker("hello world", "hello world", 100);
	checker("hello world", "world", 9);
	checker("hello world", "h", 1);
	checker("hello world", "hello", 5);
	checker("", "", 0);
	checker("", "", 10);
	checker("", "", 1);
	checker(NULL,NULL, 2);
	checker(NULL,NULL, 0);
	checker(NULL,NULL, 10);
	checker(NULL, "test", 10);
	checker(NULL, "test", 0);
	checker("test",NULL, 10);
	checker("test",NULL, 0);
	checker("\0", "\0", 10);
	checker("\0", "\0", 0);
	
	return (0);
}
