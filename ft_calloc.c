/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 07:49:09 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/10/31 15:33:39 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memmory for amount of objcs of size
void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	space;

	if (!count || !count || size > (size_t)(-1) / count)
		return (NULL);
	space = count * size;
	memory = malloc(space);
	if (!memory)
		return (NULL);
	ft_bzero(memory, space);
	return (memory);
}
