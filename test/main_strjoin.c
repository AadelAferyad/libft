#include "../libft.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

void	checker(char *s1, char *s2, char *ex, int test)
{
	printf("Test [%d] for %s and %s\n", test, !s1 ? "NULL" : s1, !s2 ? "NULL" : s2);
	char *r = ft_strjoin(s1, s2);
	char *o = ft_strdup(ex);
	int len = ft_strlen(ex);
	printf("Expected : %s\n", !o ? "NULL" : o);
	printf("Got	 : %s\n", !r ? "NULL" : r);
	if (!ft_strncmp(r, o, len))
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	free(o);
	free(r);
}
int	main(void)
{
	checker("hello", "world", "helloworld", 1);
	checker("hello ", "world", "hello world", 2);
	if (!ft_strjoin(NULL, "sadati homa chrafa"))
		printf("NULL\n");
	printf("\033[0;32m[PASSED]\033[0m\n");
	if (!ft_strjoin("sadati homa chrafa", NULL))
		printf("NULL\n");
	printf("\033[0;32m[PASSED]\033[0m\n");
	if (!ft_strjoin(NULL, NULL))
		printf("NULL\n");
	printf("\033[0;32m[PASSED]\033[0m\n");
	return (0); }
