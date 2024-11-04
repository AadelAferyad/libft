#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

void	test_case(char *desc, char *src_val, char *dest_val, size_t src_len, size_t dest_len, size_t n)
{
	char *src;
	char *dest;

	char *src_t;
	char *dest_t;

	size_t expected;
	size_t got;

	printf("\n%s\n", desc);
	src = ft_strdup(src_val);
	dest = ft_calloc(src_len + dest_len + 1, sizeof(char));
	ft_strlcpy(dest, dest_val, dest_len + 1);
	if (!src || !dest)
		return ;


	src_t = ft_strdup(src_val);
	dest_t = ft_calloc(src_len + dest_len + 1, sizeof(char));
	ft_strlcpy(dest_t, dest_val, dest_len + 1);
	if (!src_t || !dest_t)
		return ;

	expected = strlcat(dest_t, src_t, n);
	got = ft_strlcat(dest, src, n);

	printf(" Expected : %lu --> '%s'\n", expected, dest_t);
	printf(" Got : %lu --> '%s'\n", got, dest);
	if (expected == got && ft_memcmp(dest, dest_t, dest_len) == 0 )
		printf("\e[32mPASSED\e[0m\n");
	else
		printf("\e[31mFAILED\e[0m\n");
	free(src);
	free(dest);
	free(src_t);
	free(dest_t);
}


int main(void)
{
	test_case("Testing regular strlcat for allocated chunks", "source", "dest ", 6, 5, 12);
	test_case("Testing size 0", "source", "dest ", 6, 5, 0);
	test_case("Testing size 0", "source", "dest ", 67, 35, 0);
	test_case("Testing size 0", "source", "dest ", 3, 35, 0);
	test_case("testing large size", "source", "dest ", 6, 5, 22);
	test_case("Testin with large space on dest ", "source source source source", "dest", 28, 35, 3);
	/*test_case("Testing with source or dest as NULL string --> FUNCTION SHOULD SEGV", NULL, NULL, 6, 5, 12);*/
	test_case("Testin with source very large ,  small size for dest", "source source source source", "dest", 28, 5, 11);
	test_case("Testin with very small chunk dest", "source source source source", "dest", 28, 5, 3);
	test_case("Testin with very small chunk dest", "source source source source", "dest", 28, 5, 3);
	char *s = malloc(sizeof(char) * 20);
	char *d = malloc(sizeof(char) * 20);
	if (!s || !d)
		return (-1);
	/*strlcpy(s, NULL, 0);*/
	ft_strlcpy(d, NULL, 0);
	printf("%s\n", s);
	int a, b;
	b = strlcat(NULL, "hello",0);
	printf("after\n");
	a = ft_strlcat(NULL, "hello", 0);
	printf("expected : %s (%d)\ngot : %s (%d)\n", d, b, s, a);
	free(s);
	free(d);
	return (0);
}
