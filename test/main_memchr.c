#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(void	*s, int c, size_t n)
{
	char *a,*b;

	b = memchr(s, c, n);
	a = ft_memchr(s, c, n);
	printf("Test for %s\n", (char *)s);
	printf("Expected : %s\nGot: %s\n", b, a);
	if (b == a)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (b == a ? 0 : 1);
}

int	main(void)
{
	
	printf("------ memchr test cases ------\n\n");
	
	char	*a, *b;
	int d, *x;
	x = &d;
        checker("\0teste", 1024, 6);
        checker("\200teste", 357, 6);
        checker("hello world", 'o', 10);
        checker("hello world", 360, 10);
        checker("hello world", 'l', 100);
        checker("hello world", '1', 100);
        checker("hello world", 'x', 1000);

	ft_memset(((char *)x), 'D',  1);
	ft_memset(((char *)x) + 1, 'C',  1);
	ft_memset(((char *)x) + 2, 'B',  1);
	ft_memset(((char *)x) + 3, 'A',  1);
	checker(x, 'A', 4);
	return (0);
}
