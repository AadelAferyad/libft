#include "libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



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
	int 	n = -2147483648;
	/*int 	n = 0;*/
	char	*s = ft_itoa(n);
	printf("%s\n", s);
	return (0);
}
