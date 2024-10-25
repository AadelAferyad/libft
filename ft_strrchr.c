/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:16:57 by aaferyad          #+#    #+#             */
/*   Updated: 2024/10/23 23:25:03 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return ((void *) 0);
}
