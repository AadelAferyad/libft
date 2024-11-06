/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaferyad <aaferyad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:39:32 by aaferyad          #+#    #+#             */
/*   Updated: 2024/11/01 17:30:10 by aaferyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	return (words);
}

static char	*ft_alloc(char const *s, int start, int end)
{
	char	*str;
	int		len;

	len = end - start;
	str = ft_substr(s, start, len);
	return (str);
}

static void	ft_split_healper(char const *s, char c, char **grid)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = -1;
	while (s[j])
	{
		while (s[j + 1] && s[j] == c)
			j++;
		if (start == -1 && s[j] != c)
			start = j;
		if (s[j + 1] == c || (!s[j + 1] && start != -1))
		{
			grid[i] = ft_alloc(s, start, j + 1);
			i++;
			start = -1;
		}
		j++;
	}
	grid[i] = NULL;
}

static void	ft_collector(char **grid, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (grid[i])
			free(grid[i]);
		i++;
	}
	free(grid);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	char	**grid;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	grid = malloc(sizeof(char *) * (words + 1));
	if (!grid)
		return (NULL);
	ft_split_healper(s, c, grid);
	while (i < words - 1)
	{
		if (!grid[i])
		{
			ft_collector(grid, words);
			grid = NULL;
			break ;
		}
		i++;
	}
	return (grid);
}
