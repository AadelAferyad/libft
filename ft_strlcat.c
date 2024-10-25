/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:59:59 by aaferyad          #+#    #+#             */
/*   Updated: 2024/10/25 03:30:54 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i])
		i++;
	while (src[j] && j < size - 1)
	{
		des[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}
