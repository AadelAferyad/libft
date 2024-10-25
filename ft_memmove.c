/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:06:59 by aaferyad          #+#    #+#             */
/*   Updated: 2024/10/23 18:55:54 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	t;
	size_t	i;

	i = 0;
	if ((char *) src + n == (char *) dest)
	{
		t = n;
		printf("hahwa\n\n");
		while (i < t)
		{
			((char *) dest)[i] = ((char *) src)[n];  
			i++;
			n--;
		}
	}
	/*
	 * "0123456789"
	 * "hello 123 world"
	 * "456789"
	 * "o 123 world"
	 * */
	return (dest);
}
