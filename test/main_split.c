#include "../libft.h"
#include <stdlib.h>
#include <bsd/string.h>
#include <stdio.h>

void	ft_printer(char **s, char *str, char del)
{
	int	i;

	i = 0;
	if (!s)
		printf("Test for passing NULL and valid sepirator\n");
	else if (!(*str) && del == '\0')
		printf("Test for passing empty string and epmty sepirator\n");
	else if (!(*str)) 
		printf("Test for passing empty string and valid sepirator %c (%d)\n", del, del);
	else
		printf("Test for %s splited by %c (%d)\n", str, del, del);
	while (s[i])
	{
		printf("word[%d] : %s\n", i,s[i]);
		i++;
	}

}
void	ft_collect(char **s, char *str)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	free(str);
	printf("\e[30mThe used memory has been freed\e[0m\n");
}
int	ft_setup(char *string, char del)
{
	char	**s;
	char	*str;


	if (!string)
		str = ft_strdup("NULL");
	else
		str = ft_strdup(string);
	if (!str)
	{
		printf("[ft_strup] \e[31mreturned NULL\e[0m\n");
		return (-1);
	}
	s = ft_split1(str, del);
	if (!s)
	{
		printf("\e[31mFAILED\e[0m split returned NULL fail to allocate %s delimeter (%d)(%c)", str, del, del); 
		exit(-1);
	}
	ft_printer(s, str, del);
	ft_collect(s, str);

	return (0);
}
int	main(void)
{
	/*s = "kayni?n !10 d!nas A \tw?a3rin. A ,f .\tmaghrib,?. A \nmnhom* Z \naa!d#il o,. \nabdo sf, .\' hadch*!i# Z li3ta .lah.! \"yallah thella";*/
	ft_setup("hello world 123", ' ');
	ft_setup("", ' ');
	ft_setup(NULL, ' ');
	ft_setup("labess la route", '\0');
	ft_setup("hello\tworld\ttesting\twith\ttab\tchar\t", '\t');
	char **s = ft_split1("hhhhhhhhhhhhhhhhhhhhh", 'h');

		printf("%s", !s[0][0] ? "EMPTY": s[0]);
	return (0);
}
