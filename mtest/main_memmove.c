#include "../libft.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	ft_checker(char *dest, char *src, size_t n)
{
	char *a, *b;

	a = memmove(dest, src, n);
	b = ft_memmove(dest, src, n);
	printf("Expected : %s\nGot      : %s\n", a, b);
	if (!ft_strncmp(a, b, n))
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
}

int	main(void)
{
	char *dest, *src;
	dest = ft_strdup("hello world");
	src = ft_strdup("he hey hello hi");
	ft_checker(dest, src, 5);
	free(dest);
	free(src);
	src = ft_strdup("he hey hello hi");
	ft_checker(src + 4, src, 5);
	free(src);
	src = ft_strdup("he hey hello hi");
	ft_checker(src + 3, src, 5);
	free(src);
	src = ft_strdup("he hey hello hi");
	ft_checker(src, src + 2, 4);
	free(src);
	src = ft_strdup("he hey hello hi");
	ft_checker(src, src + 4, 4);
	free(src);
	src = ft_strdup("he hey hello hi");
	ft_checker(src, src + 5, 7);
	free(src);
	src = ft_strdup("he hey hello hi");
	ft_checker(src + 2, src + 2, 4);
	free(src);
	src = ft_strdup("this is a long test ,,,,,, didiwa");
	ft_checker(src + 19, src, 5);
	free(src);
	return (0);
}
