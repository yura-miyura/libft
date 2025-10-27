/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-27 16:57:58 by yartym            #+#    #+#             */
/*   Updated: 2025-10-27 16:57:58 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 1;
	while (s[i])
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words;
	int		end;
	int		start;
	int		k;

	words = count_words(s, c);
	strs = malloc(sizeof (char *) * (words + 1));
	if (!strs)
		return (NULL);
	strs[words] = NULL;
	start = 0;
	k = 0;
	while (k < words)
	{
		end = start;
		while (s[end] != c)
			end++;
		strs[k] = ft_substr(s, start, end - start);
		start = end + 1;
		k++;
	}
	return (strs);
}
