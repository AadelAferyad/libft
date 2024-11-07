#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

void	checker(char *s, char *del, size_t len)
{
	J
}
int	main(void)
{
	char *str= ft_strnstr("teste", "", 0);
	char *b = strnstr("teste", "", 0);
	ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	if (!b)
		printf("NULLL\n");
	else
		printf("%s\n", b);
	if (!str)
		printf("NULLL\n");
	else
		printf("%s\n", str);
	return (0);
}



