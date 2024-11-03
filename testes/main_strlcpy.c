#include "../libft.h"
#include <bsd/string.h>
#include <string.h>
#include <stdio.h>


int	main(void)
{
	size_t	a;
	/*size_t	b;*/
	char s[20];
	/*char d[20];*/
	a = strlcpy(NULL, "NULL", 0);
	printf("%ld %s\n", a, s);
	a = ft_strlcpy(NULL, NULL, 0);
	printf("%ld %s\n", a, s);
	return (0);
}
