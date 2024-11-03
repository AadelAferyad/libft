/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:49:30 by aaferyad          #+#    #+#             */
/*   Updated: 2024/11/03 22:26:02 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
 * ft_lstnew - create new node
 * @content: void pointer can take any data
 * Return: then new node
 * */

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!content)
		return (NULL);
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
