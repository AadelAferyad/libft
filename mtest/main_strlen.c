#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

typedef struct a
{
	int	a;
	char	c;
} d;

int	checker(char *c)
{
	int a, b;
	if (!c)
		printf("--------Test for NULL --------\n");
	else
		printf("--------Test for %s --------\n", c);
	a = strlen(c);
	b = ft_strlen(c);
	printf("Expected : %d\n", a);
	printf("Got	 : %d\n", b);
	if (a == b)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (a == b? 0 : 1);
}

int	main(void)
{
	d x = {97, 65};	
	d *b = &x;
	printf("------ strlen test cases ------\n\n");
	checker("hello world");
	checker("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.");
	
	checker((char *)b + 4);
	checker("\0");
	checker("");	
	/* to test segv un comment this line of code : strlen should segv*/
	/*checker(NULL);*/
	return (0);
}
