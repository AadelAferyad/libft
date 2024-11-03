#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h" 
#include <stdio.h>
#include <fcntl.h>

/*0000 0001 0000 0011 0000 0011 0000 0111
 *0000 0000 0000 0000 0000 0101 0011 1001 --byte by byte --> 0 0 5 57
 *0000 0000 0000 0000 0000 0111 1110 1000 --byte by byte --> 0 0 7 232 
 * */
int main(void)
{
	int fd = open("testt", O_CREAT | O_RDONLY);
	if (fd == -1)
	{
		printf("WALO WALOO MAKHDAM\n");
		return (-1);
		
	}
	/*ft_putnbr_fd(1337 , fd);*/
	char b[12];
	/*lseek(fd, 0, SEEK_SET);*/
	int a = read(fd, b, 12);
	printf("%d\n%s\n", a, b);
	int	x = close(fd);
	printf("%d\n", x);
	return (0);
}
