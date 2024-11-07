#include "../libft.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	ft_checker(char *s)
{
	int	a,b;

	b = atoi(s);
	a = ft_atoi(s);
	printf("Test for %s\n", s);
	printf("Expected : %d\nGot: %d\n", b, a);
	if (b == a)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (b == a ? 0 : 1);
}
int	main(void)
{
	int	i = 0;
	char	*s[] = {
		"-2147483648",
		"2147483647",
		"4294967295",
		/*"-9223372036854775808",*/
		/*"9223372036854775807",*/
		/*"28446744073709551615",*/
		/*"9223372036854775808",*/
		/*"9223372036854775807",*/
		/*"18446744073709551615",*/
		"0",
		"                       				  \t\t\n\n 22",
		"\0\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01 13 \x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02 13 \x03\x04\x05\x06\a\b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03 13 \x04\x05\x06\a\b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04 13 \x05\x06\a\b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05 13 \x06\a\b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06 13 \a\b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a 13 \b\t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b 13 \t\n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t 13 \n\v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t\n 13 \v\f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t\n\v 13 \f\r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f 13 \r\x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r 13 \x0E\x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0E 13 \x0F\x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0E\x0F 13 \x10 1337",
		"\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0E\x0F\x10 13",
		"h22",
		"13b37",
		"--12",
		"        \t+12",
		"1337",
		NULL
	};
	while (s[i])
	{
		ft_checker(s[i]);
		i++;
	}
	return (0);
}
