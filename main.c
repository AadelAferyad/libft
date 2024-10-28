#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h" 
#include <stdio.h>


/*0000 0001 0000 0011 0000 0011 0000 0111
 *0000 0000 0000 0000 0000 0101 0011 1001 --byte by byte --> 0 0 5 57
 *0000 0000 0000 0000 0000 0111 1110 1000 --byte by byte --> 0 0 7 232 
 * */
int main(void)
{
	char s[] = "hello 123 world";
	char d[] = "hello 123 world";
	printf("%s\nstart from %c to %c\n", s, s[4], s[4]);
	ft_memmove(s + 4, s, 4);
	memmove(d + 4, d, 4);
	if (strcmp(d, s) == 0)
		printf("SAME OUTPUT\n");
	printf("%s\n\n", s);
	printf("%s\n", d);
	return (0);
}
