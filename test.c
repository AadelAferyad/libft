#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>


/*
 * 0000 0000
 *
 * 1000 0000
 * 0111 1111
 *         1+
 * 1000 0000
 * 1000 0001
 * 0111 1110
 * 0111 1111
 * 1000 0010
 * 0111 1101
 * 0111 1110
 * */
int main(void)
{
	int	a, *b;
	b = &a;
	printf("%s\n", s);
	memset(b, 244, 1);
	printf("all bytes  : %d\n", a);
	printf("first byte : %d\n\n", ((char *) b)[0]);

	bzero(b, 4);
	ft_memset(b, 199, 1);
	ft_memset(((char *) b) + 1, 255, 1);
	ft_memset(((char *) b) + 2, 255, 1);
	ft_memset(((char *) b) + 3, 255, 1);

	printf("all bytes  : %d\n", a);
	printf("first byte : %d\n\n", ((char *) b)[0]);

	char *c, s;
	c = &s;

	ft_memset(s, -129, 1);

	return (0);
}
