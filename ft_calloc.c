/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:41:46 by aaferyad          #+#    #+#             */
/*   Updated: 2024/10/25 01:53:11 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return ((void *) 0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return ((void *) 0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
