/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 01:09:01 by aaferyad          #+#    #+#             */
/*   Updated: 2024/11/01 02:03:27 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_check_start(char const *s1, char const *set)
{
	int	len_set;

	len_set = ft_strlen(set);
	if (!ft_strncmp(s1, set, len_set))
		return (len_set);
	return (0);
}

static int	ft_check_end(char const *s1, char const *set)
{
	int	len_set;
	int	len_s1;
	int	index;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	index = len_s1 - len_set;
	if (index > 0 && !ft_strncmp(s1 + index, set, len_set))
		return (len_s1 - len_set);
	return (len_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	start = ft_check_start(s1, set);
	end = ft_check_end(s1, set);
	if (start >= end)
		return (NULL);
	str = ft_substr(s1, start, end - start);
	return (str);
}
