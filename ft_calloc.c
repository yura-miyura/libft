/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 12:26:49 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/12/24 12:27:02 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memmory for amount of objcs of size
void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if ((size != 0 && count > (SIZE_MAX / size)))
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
	{
		free(memory);
		return (NULL);
	}
	ft_bzero(memory, count * size);
	return (memory);
}
