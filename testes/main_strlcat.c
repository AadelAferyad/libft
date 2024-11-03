#include "../libft.h"
#include <bsd/string.h>
#include <string.h>
#include <stdio.h>


int	main(void)
{
	size_t	a;
	size_t	b;
	char s[20];
	char d[20];
	ft_strlcpy(s, "FIEN ", 6);
	ft_strlcpy(d, "FIEN ", 6);
	a = ft_strlcat(s, "hello crul world of west side", 0);
	printf("   ---- mine -----\n%s\n", s);
	b = strlcat(d, "hello crul world of west side", 0);
	printf("size : %ld\nsize : %ld\n", a, b);
	printf("%s\n", d);
	return (0);
}
