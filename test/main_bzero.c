#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	printer(char *s, char *m, int len)
{
	int	i = 0;
	while (i < len)
	{
		if (!i)
			printf("Expected :");
		if (!s[i])
			printf("\\0");
		else
			printf("%c", s[i]);
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (!i)
			printf("\nGot      :");
		if (!s[i])
			printf("\\0");
		else
			printf("%c", s[i]);
		i++;
	}
	printf("\n");
}

int	checker(char *s, char *mine, int size, int len)
{
	int	i;

	i = 0;
	printf("Test for buffer with size %d\n", size);
	printer(s, mine, len);
	while (i < len)
	{
		if (s[i] != mine[i])
		{
			printf("\033[0;31m[FAILD]\033[0m\n");
		}
		i++;
	}
	printf("\033[0;32m[PASSED]\033[0m\n");
	return (0);
}

void	test_gen(char *str, int size, int len)
{
	char	*s;
	char	*s1;
	printf("------ bzero test cases ------\n\n");
	s = ft_strdup("hello");	
	s1 = ft_strdup("hello");	
	ft_bzero(s, size);
	bzero(s1, size);
	checker(s, s1, size, len);
	free(s);	
	free(s1);	
}

int	main(void)
{
	/*To check segv uncomment this code IT SHOLD SEG V*/
	/*checker(NULL, 12, 1);*/
	test_gen("hello", 2, 5);
	
	test_gen("hello", 0, 5);
	test_gen("hello", 5, 5);
	test_gen("hello", 1, 5);
	test_gen("hello", 6, 5);
	test_gen("hello", 2, 5);
	test_gen("hello", 2, 5);
	test_gen("hello", 2, 5);

	char *s = malloc(11);
	char *s1 = malloc(11);
	ft_strlcpy(s, "hello", 6);
	ft_strlcpy(s1, "hello", 6);

	ft_bzero(s + 5, 5);
	bzero(s1 + 5, 5);
	checker(s, s1, 5, 11);

	free(s);
	free(s1);

	char *s2 = ft_strdup("hello");
	bzero(s2, 10000);
	printf("ss %s", s2);
	free(s2);
	return (0);
}
