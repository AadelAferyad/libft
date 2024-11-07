#include "../libft.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(void *s, int c, size_t n)
{
	int *a, *b;
	void *s1 = malloc(sizeof(s));
	ft_memcpy(s1, s, sizeof(s));
	a = memset(s1, c, n);
	ft_bzero(s, n);
	b = ft_memset(s, c, n);
	if (!s)
		printf("--------Test for NULL --------\n");
	else
		printf("--------Test for %d fill %ld bytes --------\n", c, n);
	if (!s)
		printf("Expected : NULL\n");
	else
		printf("Expected : %d\n", *(int *)s1);

	if (!s)
		printf("Got	 : NULL\n");
	else
		printf("Got	 : %d\n", *(int *)s);
	if (!ft_memcmp(a, b, n))
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	free(s1);
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
	checker(s, 1089, 1);
	/*checker(NULL, 12, 0);*/
	ft_bzero(a, sizeof(char));
	checker(s, 1089, 1);
	char *str = ft_strdup("hello");
	checker(str, 'H', 1);
	printf("%s\n", str);
	free(str);
	/*To check segv uncomment this code IT SHOLD SEG V*/
	/*checker(NULL, 12, 1);*/
	return (0);
}
