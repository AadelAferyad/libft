#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(void *s, int c, size_t n)
{
	void * b = s;
	if (!s || !s1)
		printf("--------Test for NULL --------\n");
	else
		printf("--------Test for %d fill %ld bytes --------\n", c, n);
	memset(s, c, n);
	ft_memset(b, c, n);
	printf("Expected : %d\n", s);
	printf("Got	 : %d\n", b);
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
	return (0);
}
