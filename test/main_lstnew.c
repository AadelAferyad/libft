#include "../libft.h"
#include <stdlib.h>
#include <bsd/string.h>
#include <stdio.h>

typedef struct person
{
	char	*name;
	int	age;
} pr;

void	printer(t_list *head)
{
	if (!head)
		printf("NULL\n");
	while (head)
	{
		printf("(%s)[%d years]-->", ((pr *)(head->content))->name, ((pr *) head->content)->age);
		if (!head->next)
			printf("NULL\n");
		head = head->next;
	}
}
pr	*generate_person(char *s, int age)
{
	pr	*ptr;

	ptr = malloc(sizeof(pr));
	if (!ptr)
		return (NULL);
	ptr->name = ft_strdup(s);
	ptr->age = age;
	return (ptr);
}

void	collector(t_list *head)
{
	t_list	*tmp;

	while (head)
	{
		tmp = head->next;	
		free(((pr *) head->content)->name);
		free(head->content);
		free(head);
		head = tmp;
	}
}

int	main(void)
{
	pr	*data;
	t_list	*head;

	data = generate_person("toby", 22);
	head = ft_lstnew(data);
	printer(head);
	collector(head);
	return (0);
}
