#include "../libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	checker(char *s, char *s1, size_t c)
{
	int 	a, b;
	if (!s || !s1)
		printf("--------Test for NULL --------\n");
	else
		printf("--------Test for %s AND %s for %ld --------\n", s, s1, c);
	if (!s || !s1)
		printf("Test for NULL ft_strchr (should seg fault)\n");
	b = ft_memcmp(s, s1, c);
	if (!s || !s1)
		printf("Test for NULL strchr (should seg fault)\n");
	a = memcmp(s, s1, c);
	printf("Expected : %d\n", a);
	printf("Got	 : %d\n", b);
	if (a == b)
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
	return (0);
}
int	main(void)
{
	
	printf("------ memcmp test cases ------\n\n");
	checker("hello world", "hello world", 13);
	checker("hello world", "hello world", 13);
	checker("hello world", "hello world", 9);
	checker("hello world", "hello world", 5);
	checker("hello world", "hello world", 1);
	/*checker("hello world", "hello world", 0);*/
	checker("hello world", "hello world", 100);
	checker("hello world", "world", 9);
	checker("hello world", "h", 1);
	checker("hello world", "hello", 5);
	/*checker("", "", 10);*/
	/*checker(NULL,NULL, 2);*/
	/*checker(NULL,NULL, 0);*/
	/*checker(NULL,NULL, 10);*/
	/*checker(NULL, "test", 10);*/
	/*checker(NULL, "test", 0);*/
	/*checker("test",NULL, 10);*/
	/*checker("test",NULL, 0);*/
	/*checker("\0", "\0", 10);*/
	/*checker("\0", "\0", 0);*/
	/**/
	/*checker("\200", "\0", 1);*/
	/*checker("\127", "", 1);*/

	/*char *s1 = "\xff\xaa\xde\x12";*/
	/*char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";*/
	/*size_t size = 4;*/
	/*int i1 = memcmp(s1, s2, size);*/
	/*int i2 = ft_memcmp(s1, s2, size);*/
	
	char *s1 = "atoms\0\0\0\0";
	char *s2 = "atoms\0abc";
	size_t size = 8;
	int i1 = memcmp(s1, s2, size);
	int i2 = ft_memcmp(s1, s2, size);
	printf("Expected : %d\n", i1);
	printf("Got	 : %d\n", i2);
	i1 = memcmp("zyxbcdefgh", "abcdefgxyz", 0);
	i2 = ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0);
	printf("Expected : %d\n", i1);
	printf("Got	 : %d\n", i2);

	int	*x, z;
	int	*j, g;
	x = &z;
	j = &g;
	ft_memset(((char *)x), 'D',  1);
	ft_memset(((char *)x) + 1, 'C',  1);
	ft_memset(((char *)x) + 2, 'B',  1);
	ft_memset(((char *)x) + 3, 'A',  1);

	ft_memset(((char *)j), 'D',  1);
	ft_memset(((char *)j) + 1, 'C',  1);
	ft_memset(((char *)j) + 2, 'B',  1);
	ft_memset(((char *)j) + 3, 'A',  1);
	i1 = memcmp(x, j, 100);
	i2 = ft_memcmp(x, j, 100);
	printf("Expected : %d\n", i1);
	printf("Got	 : %d\n", i2);
	return (0);
}
