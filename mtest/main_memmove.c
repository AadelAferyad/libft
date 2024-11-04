#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>


int	main(void)
{
	char	b[] = "hello world how are u today test";
	char	d[] = "hello world how are u today test";
	char	s[] = "hello world how are u today test";
	
	memcpy(NULL, NULL, 5);
	/*ft_memcpy(NULL, NULL, 5);*/
	printf("%s\n%s\n%s\n", b, d, s);

	return (0);
}
