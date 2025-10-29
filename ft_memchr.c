/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:07:37 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/10/25 17:06:01 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns location of the character in memory address
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp_s;
	size_t			i;
	unsigned char	cc;

	if (!s)
		return (NULL);
	i = 0;
	cc = c;
	temp_s = (unsigned char *) s;
	while (i < n)
	{
		if (*(temp_s + i) == cc)
			return ((void *)(temp_s + i));
		i++;
	}
	return (NULL);
}
