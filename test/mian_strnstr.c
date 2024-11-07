#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

void	checker(char *s, char *del, size_t len)
{
	char *a, *b;

	printf("Test for %s with del as %s and size %ld\n", !s ? "NULL" : s, !del ? "NULL" : del, len);

	a = strnstr(s, del, len);
	b = ft_strnstr(s, del, len);

	printf("Expected : %s\n", !a ? "NULL" : a);
	printf("Got	 : %s\n", !b ? "NULL" : b);
	
	if (a == b)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
}
int	main(void)
{
	checker("teste", "", 0);
	checker("teste", "e", 0);
	checker("lorem ipsum dolor sit amet", "dolor", 0);
	/*checker("teste", NULL, 0);*/
	return (0);
}



