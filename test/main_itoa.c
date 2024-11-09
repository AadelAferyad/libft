#include "../libft.h"
#include <stdlib.h>
#include <bsd/string.h>
#include <stdio.h>

int	nblen(int	nb)
{
	int	i;
	long	n;

	i = 0;
	n = (long) nb;
	if (n <= 0)
	{
		i++;
		if (n < 0)
			n = -n; 
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	t()
{
	static int i;
	i = 0;
	i++;
	return (i);
}
void	checker(int	nb, char *ex)
{
	int	test = t();
	int	len = nblen(nb);
	printf("Test [%d] for %d\n", test, nb);
	char *r = ft_itoa(nb);
	char *o = ft_strdup(ex);
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
	int i = 0;
	char s[2];
	s[1] = 0;
	while (i < 10)
	{
		s[0] = i + 48;
		checker(i, s);
		i++;
	}
	checker(1337, "1337");
	checker(2147483647, "2147483647");
	checker(-2147483648, "-2147483648");
	checker(-2147, "-2147");
	return (0);
}
