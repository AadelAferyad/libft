/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:06:59 by aaferyad          #+#    #+#             */
/*   Updated: 2024/11/03 21:20:27 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	u_dst = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	i = 0;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	n--;
	while (i <= n)
	{
		u_dst[n - i] = u_src[n - i];
		i++;
	}
	return (dest);
}
