#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	
	printf("------ memchr test cases ------\n\n");
	
	char	*a, *b;

        a = memchr("\0teste", 1024, 6);
        b  = ft_memchr("\0teste", 1024, 6) ;
	printf("Expected : %s\nGot      : %s\n\n", a, b);
	/*printf("Expected : %c\nGot      : %c\n\n", a[1], b[1]);*/
        a = memchr("\200teste", 357, 6);
        b  = ft_memchr("\200teste", 357, 6) ;
	printf("Expected : %s\nGot      : %s\n\n", a, b);
	return (0);
}
