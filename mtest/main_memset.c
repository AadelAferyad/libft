#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(void *s, int c, size_t n)
{
	int *a, *b;
	a = memset(s, c, n);
	if (!s)
		printf("--------Test for NULL --------\n");
	else
		printf("--------Test for %d fill %ld bytes --------\n", c, n);
	printf("Expected : %d\n", *(int *)s);
	ft_bzero(s, n);
	b = ft_memset(s, c, n);
	printf("Got	 : %d\n",  *(int *)s);
	if (a == b)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (0);
}
int	main(void)
{
	printf("------ memset test cases ------\n\n");
	int *a, b;
	char c, *s;
	a = &b;
	s = &c;
	checker(a, 0, 4);
	ft_bzero(a, sizeof(int));
	checker(s, 97, 1);
	ft_bzero(s, sizeof(char));
	checker(s, 255, 1);
	ft_bzero(s, sizeof(char));
	checker(s, -12, 1);
	memset(NULL, 0, 2);
	ft_memset(NULL, 0, 2);
	return (0);
}
