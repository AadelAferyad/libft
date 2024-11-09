#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void t_substr(int test, char *src, int start, int len, char *ex)
{
	size_t b = len;
	printf("Test [%d] for %s start at index(%d)[%c] with len of %d\n", test, !src[0] ? "\\0" : src, start, !src[start] ? '0' : src[start], len);
	if (test == 5)
		printf("%li\n", b);
	char	*out = ft_substr(src, (unsigned int) start, len);
	printf("Expected : %s\n", !ex[0] ? "\\0" : ex);
	printf("Got	 : %s\n", !out[0] ? "\\0" : out);
	printf("\033[0;32m[-----------------------------]\033[0m\n");
}
int	main(void)
{
	t_substr(1, "", 0, 0, "") ;
        t_substr(2, "", 0, 1, "") ;
        t_substr(3, "", 1, 1, "") ;
        t_substr(4, "hola", -1, 0, "");
        t_substr(5, "hola", 0, -1, "hola") ;
        t_substr(6, "hola", -1, -1, "") ;
        t_substr(7, "hola", 0, 0, "") ;
        t_substr(8, "hola", 0, 1, "h");
        t_substr(9, "hola", 0, 3, "hol") ;
        t_substr(10, "hola", 0, 4, "hola") ;
        t_substr(11, "hola", 0, 5, "hola") ;
        t_substr(12, "hola", 2, 0, "") ;
        t_substr(13, "hola", 2, 1, "l");
        t_substr(14, "hola", 2, 2, "la") ;
        t_substr(15, "hola", 2, 3, "la") ;
        t_substr(16, "hola", 2, 30, "la");
        t_substr(17, "hola", 3, 0, "") ;
        t_substr(18, "hola", 3, 1, "a");
        t_substr(19, "hola", 3, 2, "a");
        t_substr(20, "hola", 4, 0, "") ;
        t_substr(21, "hola", 4, 1, "") ;
        t_substr(22, "hola", 4, 20, "");
        t_substr(23, "hola", 5, 2, "") ;
	char *s = ft_substr(NULL, 0, 0);
	printf("%s\n", !s ? "NULL" : s);
}
