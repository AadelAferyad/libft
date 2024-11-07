#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[] = "          ";
	char *strtrim;
        strtrim = ft_strtrim(s1, " ");
	if (!strtrim)
		printf("NULLL\n");
	else
		printf("%s\n", strtrim);
	return (0);
}



