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

void	add(void *content)
{
	*(int *) content = 'f';
}

void	del(void *content)
{
	free(content);
}
int main(void)
{
	char	*a = malloc(sizeof(char));
	*a = 'a';
	int	*b = malloc(sizeof(int));
	*b = 98;
	int	*c = malloc(sizeof(int));
	*c = 99;
	int	*d = malloc(sizeof(int));
	*d = 100;
	int	*e = malloc(sizeof(int));
	*e = 101;
	int	*f = malloc(sizeof(int));
	*f = 102;
	t_list *head;
	t_list *tem;
	t_list *tem1;
	t_list	*s = ft_lstnew(e);
	t_list *new = ft_lstnew(d);
	t_list *new1 = ft_lstnew(c);
	t_list *new2 = ft_lstnew(b);
	t_list *new3 = ft_lstnew(a);
	t_list *new4 = ft_lstnew(f);
	head = NULL;

	ft_lstadd_front(&head, new);
	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_back(&head, s);
	ft_lstadd_back(&head, new4);
	
	tem = head;
	tem1 = head;
	printf("size of linked list : %d\n", ft_lstsize(head));
	t_list *last_node = ft_lstlast(head);
	printf("the last node : (%c)-->NULL\n", *(int *) last_node->content);
	while (head)
	{
		printf("(%c)-->", *(int *)head->content);
		head = head->next;
	}
	printf("NULL\n");
	ft_lstiter(tem, add);
	while (tem)
	{
		printf("(%c)-->", *(int *)tem->content);
		tem = tem->next;
	}
	printf("NULL\n");
	ft_lstclear(&tem1, del);
	if (!tem1)
		printf("POINTER IS NULLED\n");
	printf("SHOULD BE EMPTY LIST\n");
	return (0);
}
