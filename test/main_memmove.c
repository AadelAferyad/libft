#include "../libft.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int	ft_checker(char *dest, char *dest2, char *src, char *src2, size_t n)
{
	char *a, *b;
	a = memmove(dest, src, n);
	b = ft_memmove(dest2, src2, n);
	printf("Expected : %s\nGot      : %s\n", a, b);
	if (!ft_strncmp(a, b, 100))
		printf("\033[0;32m[PASSED]\033[0m\n");
	else
		printf("\033[0;31m[FAILD]\033[0m\n");
}

int	main(void)
{
	char *dest, *dest2, *src, *src2;
	dest = ft_strdup("hello world");
	dest2 = ft_strdup("hello world");
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(dest,dest2, src,src2, 5);
	free(dest);
	free(dest2);
	free(src);
	free(src2);
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src + 4,src2 + 4, src,src2, 5);
	free(src);
	free(src2);
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src + 3,src2 + 3, src,src2, 5);
	free(src);
	free(src2);
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src,src2, src + 2, src2 + 2, 4);
	free(src);
	free(src2);
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src,src2, src + 4, src2 + 4, 4);
	free(src);
	free(src2);
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src,src2, src + 5,src2 + 5, 7);
	free(src);
	free(src2);
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src + 2,src2 + 2, src + 2, src2 + 2, 4);
	free(src);
	free(src2);
	src = ft_strdup("this is a long test ,,,,,, didiwa");
	src2 = ft_strdup("this is a long test ,,,,,, didiwa");
	ft_checker(src + 19,src2 + 19, src,src2, 5);
	free(src);
	free(src2);
	src = ft_strdup("hey world back to xqc     ");
	src2 = ft_strdup("hey world back to xqc     ");
	ft_checker(src, src2, src + 4,src2 + 4, 7);
	free(src);
	free(src2);
	src = ft_strdup("hey world back to xqc     ");
	src2 = ft_strdup("hey world back to xqc     ");
	printf("%s\n", (char *)ft_memcpy(src, src + 4, 7));
	free(src);
	free(src2);
	/*-------------AI test cases ------------------*/

	dest = ft_strdup("hello world");
	dest2 = ft_strdup("hello world");
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(dest,dest2, src,src2, 5);  // Move first 5 characters
	free(dest);
	free(dest2);
	free(src);
	free(src2);

	// Test case 2: Moving memory with overlap (src + 4 to dest)
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src + 4,src2 + 4, src, src2, 5);  // Move first 5 characters from index 4
	free(src);
	free(src2);

	// Test case 3: Move memory with reverse overlap (dest overlaps src)
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src + 3,src2 + 3, src, src2, 5);  // Move 5 characters from index 3
	free(src);
	free(src2);

	// Test case 4: Move with a small length and start index
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src, src2, src + 2, src2 + 2, 4);  // Move 4 characters starting from index 2
	free(src);
	free(src2);

	// Test case 5: Move with different offsets (destination before source)
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src, src2, src + 4, src2 + 4, 4);  // Move 4 characters starting from index 4
	free(src);
	free(src2);

	// Test case 6: Move memory with larger length (7 characters)
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src, src2, src + 5, src2 + 5, 7);  // Move 7 characters starting from index 5
	free(src);
	free(src2);

	// Test case 7: Move memory with zero-length (no change)
	src = ft_strdup("he hey hello hi");
	src2 = ft_strdup("he hey hello hi");
	ft_checker(src + 2,src2 + 2, src + 2, src2 + 2, 0);  // Move 0 characters
	free(src);
	free(src2);

	// Test case 8: Large test case with overlapping ranges
	src = ft_strdup("this is a long test ,,,,,, didiwa");
	src2 = ft_strdup("this is a long test ,,,,,, didiwa");
	ft_checker(src + 19, src2 + 19, src, src2, 5);  // Move 5 characters from index 19
	free(src);
	free(src2);

	// Test case 9: Move with a small length in a large string
	src = ft_strdup("hey world back to xqc     ");
	src2 = ft_strdup("hey world back to xqc     ");
	ft_checker(src,src2, src + 4, src2 + 4, 7);  // Move 7 characters starting from index 4
	free(src);
	free(src2);

	// Test case 10: Special case of identical source and destination
	src = ft_strdup("hello world");
	src2 = ft_strdup("hello world");
	ft_checker(src, src2, src, src2, 5);  // Move 5 characters within the same memory
	free(src);
	free(src2);

	// Test case 11: Move with very small buffer (single byte)
	src = ft_strdup("abcde");
	src2 = ft_strdup("abcde");
	ft_checker(src, src2, src + 1, src2 + 1, 1);  // Move 1 character from index 1 to index 0
	free(src);
	free(src2);

	// Test case 12: Moving an empty string (n = 0)
	src = ft_strdup("");
	src2 = ft_strdup("");
	dest = ft_strdup("");
	dest2 = ft_strdup("");
	ft_checker(dest, dest2, src, src2, 0);  // Move 0 characters
	free(src);
	free(src2);
	free(dest);
	free(dest2);

	// Test case 13: Moving past null terminator (source and destination exceed string length)
	src = ft_strdup("hello");
	src2 = ft_strdup("hello");
	dest = ft_strdup("world");
	dest2 = ft_strdup("world");
	ft_checker(dest, dest2, src, src2, 7);  // Move 7 characters, beyond null terminator
	free(src);
	free(src2);
	free(dest);
	free(dest2);

	// Test case 14: Move with a large n (larger than string size)
	src = ft_strdup("small");
	src2 = ft_strdup("small");
	dest = ft_strdup("destination");
	dest2 = ft_strdup("destination");
	ft_checker(dest, dest2, src, src2, 100);  // Move more than string length
	free(src);
	free(src2);
	free(dest);
	free(dest2);

	// Test case 15: Large string with no overlap
	src = ft_strdup("The quick brown fox jumps over the lazy dog");
	src2 = ft_strdup("The quick brown fox jumps over the lazy dog");
	dest = ft_strdup("abcdefghijklmnopqrstuvwxyz");
	dest2 = ft_strdup("abcdefghijklmnopqrstuvwxyz");
	ft_checker(dest, dest2, src, src2, 10);  // Move first 10 characters
	free(src);
	free(src2);
	free(dest);
	free(dest2);

	// Test case 16: Large string with reverse overlap (move back into itself)
	src = ft_strdup("The quick brown fox jumps over the lazy dog");
	src2 = ft_strdup("The quick brown fox jumps over the lazy dog");
	ft_checker(src + 5, src2 + 5, src, src2, 6);  // Move 6 characters from index 5 back into itself
	free(src);
	free(src2);

	// Test case 17: Overlap of exactly one byte (should not overlap)
	src = ft_strdup("abc");
	src2 = ft_strdup("abc");
	ft_checker(src + 1, src2 + 1, src, src2, 1);  // Move 1 character from index 1
	free(src);
	free(src2);

	// Test case 18: Move to the end of the buffer (destination and source are at the buffer's end)
	src = ft_strdup("hello world");
	src2 = ft_strdup("hello world");
	ft_checker(src + 6, src2 + 6, src, src2, 5);  // Move last 5 characters from index 6
	free(src);
	free(src2);

	// Test case 19: Moving a long string into a short string
	src = ft_strdup("longer string");
	src2 = ft_strdup("longer string");
	dest = ft_strdup("short");
	dest2 = ft_strdup("short");
	ft_checker(dest, dest2, src, src2, 5);  // Move 5 characters from the longer string
	free(src);
	free(src2);
	free(dest);

	// Test case 20: Test with single character moves in a larger string
	src = ft_strdup("hello");
	src2 = ft_strdup("hello");
	dest = ft_strdup("world");
	dest2 = ft_strdup("world");
	ft_checker(dest, dest2, src + 1, src2 + 1, 1);  // Move 1 character from index 1 of the source string
	free(src);
	free(src2);
	free(dest);

	return (0);
}
