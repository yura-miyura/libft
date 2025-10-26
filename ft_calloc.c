/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 07:49:09 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/10/26 08:49:29 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory;
	size_t			space;

	space = sizeof (size) * count;
	memory = malloc(space);
	if (!memory)
		return (NULL);
	while (space-- > 0)
		memory[space] = 0;
	return ((void *) memory);
}
