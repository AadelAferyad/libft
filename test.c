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

static int	ft_count_nbr(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
int main(void)
{
	int	i = ft_count_nbr(-10);
	printf("%d\n", i);
	return (0);
}
