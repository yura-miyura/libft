/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-24 15:33:24 by yartym            #+#    #+#             */
/*   Updated: 2025-10-24 15:33:24 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	if (src_size >= size - 1)
		return (src_size + size - 1);
	src_size += ft_strlen(dst);
	while (i < size - 1 && *src)
	{
		if (!dst[i])
			dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (size);
}
