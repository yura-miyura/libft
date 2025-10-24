/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-24 13:28:22 by yartym            #+#    #+#             */
/*   Updated: 2025-10-24 13:28:22 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	i = -1;
	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (++i < size - 1 && src[i])
		dst[i] = src[i];
	// Should it fill all the empty spaces with \0
	dst[i] = '\0';
	return (src_size);
}
