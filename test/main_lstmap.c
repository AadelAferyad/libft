#include "../libft.h"
#include <stdlib.h>
#include <bsd/string.h>
#include <stdio.h>

typedef struct person
{
	char	*name;
	int	age;
} pr;

void	printer(t_list *h)
{
	t_list	*head;
	head = h;
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
void	*f(void	*content)
{
	int i = 0;
	while (((pr *) content)->name[i])
	{
		((pr *) content)->name[i] = ft_toupper(((pr *) content)->name[i]);
		i++;
	}
	((pr *) content)->age = 1337;
	return (content);
}
void	del(void *content)
{
		free(((pr *) content)->name);
		free(content);
}
void	collector(t_list *head)
{
	t_list	*tmp;

	while (head)
	{
		tmp = head->next;	
		free(((pr *) head->content)->name);
		((pr *) head->content)->name = NULL;
		free(head->content);
		head->content = NULL;
		free(head);
		head = tmp;
	}
}

void	del_only_nodes(t_list *head)
{
	t_list	*tmp;

	while (head)
	{
		tmp = head->next;	
		free(head);
		head = tmp;
	}
}
int	main(void)
{
	pr	*data;
	t_list	*head;
	t_list	*tmp;

	data = generate_person("toby", 22);
	head = ft_lstnew(data);

	data = generate_person("ahmed", 12);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);


	data = generate_person("hamza", 20);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);


	data = generate_person("moha", 42);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);
	
	data = generate_person("cheb 3rbi", 32);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);

	data = generate_person("ilyas", 29);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);

	data = generate_person("dibaha", 52);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);


	data = generate_person("bo3ocha", 62);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);


	data = generate_person("m3lem abdsllam korda lah ir7mo", 34);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);
	
	data = generate_person("hanane sabeer", 21);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);

	data = generate_person("dik zwina li chft f resto", 22);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);


	data = generate_person("lwalida d sma3il lah ikhliha lih", 52);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);


	data = generate_person("sa3id 3wita", 21);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);


	data = generate_person("abdollah syani", 29);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);
	
	data = generate_person("zombie chmkar oussama", 22);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);

	data = generate_person("hodai9a l7ama9a", 0);
	tmp = ft_lstnew(data);
	ft_lstadd_back(&head, tmp);

	printer(head);
	
	printf("this is new list using lstmapid\n");

	t_list *new;
	new = ft_lstmap(head, f, del);
	printer(new);
	collector(head);
	del_only_nodes(new);
	return (0);
}
