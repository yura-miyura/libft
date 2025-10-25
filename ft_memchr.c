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

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*temp_s;
	size_t	i;

	i = 0;
	temp_s = (char *) s;
	while (i < n)
	{
		if (*(temp_s + i) == c)
			return ((void *)temp_s + i);
		i++;
	}
	return (NULL);
}
