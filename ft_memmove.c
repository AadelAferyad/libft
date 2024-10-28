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
	size_t	i;

	i = 0;
	if (dest + n == src || src + n == dest)
	{
		printf("true\n");
		n--;
		while (i <= n)
		{
			((char *)dest)[n - i] = ((char *) src)[n - i];
			i++;
		}
	}
	return (dest);
}
