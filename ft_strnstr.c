/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:40:43 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/10/25 17:08:20 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*trun_hay;

	trun_hay = (char *) haystack;
	if (!*needle)
		return (trun_hay);
	i = 0;
	while (trun_hay[i] && i < len)
	{
		if (trun_hay[i] == *needle)
		{
			j = 0;
			while (trun_hay[i + j] && needle[j]
				&& trun_hay[i + j] == needle[j] && i + j < len)
				j++;
			if (!needle[j])
				return (trun_hay + i);
		}
		i++;
	}
	return (NULL);
}
