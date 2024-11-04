#include "../libft.h"
#include <stdlib.h>
#include <bsd/string.h>
#include <stdio.h>

void	test_case(const char *desc, char *src_val, size_t size, size_t sizem)
{
	char	*dest;
	char	*dest_t;

	size_t exp;
	size_t got;

	if (!sizem)
		sizem++;
	printf("\n%s\n", desc);
	dest = ft_calloc(sizem, sizem + 1);
	if (!dest)
		return ;

	dest_t = ft_calloc(sizem, sizem + 1);
	if (!dest_t)
		return ;

	exp = strlcpy(dest_t, src_val, size);
	got = ft_strlcpy(dest, src_val, size);

	printf("Expected: %lu, '%s'\n", exp, dest_t);
	printf("Got: %lu, '%s'\n", got, dest);
	if (got == exp && memcmp(dest, dest_t, size) == 0) 
		printf("\e[32mPASS\e[0m\n");
	else
		printf("\e[31mFAILED\e[0m\n");
	free(dest);
	free(dest_t);
}


int main(void)
{
	test_case("Testing regular case, regular strings", "Source string here", 19, 19);
	test_case("Testing Source but size 0", "Source string here", 0, 20);
	test_case("Testing with bigger size", "Source string here", 100, 20);
	test_case("Testing with smaller size", "Source string here", 2, 10);
	test_case("Testing with smaller size", "Source string here", 5, 20);
	test_case("Testing with smaller size", "Source string here", 4, 20);
	return (0);
}
