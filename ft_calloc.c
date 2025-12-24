/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 07:49:09 by yuriiartymi       #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/12/23 10:01:55 by yuriiartymi      ###   ########.fr       */
=======
/*   Updated: 2025/10/31 15:38:08 by yartym           ###   ########.fr       */
>>>>>>> 1525c83e7fdc44eb04e6219e100d4fd3edcb7e57
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memmory for amount of objcs of size
void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	space;

<<<<<<< HEAD
	if (!count || size > (size_t)(-1) / count)
=======
	if (count > 0 && size > ULONG_MAX / count)
>>>>>>> 1525c83e7fdc44eb04e6219e100d4fd3edcb7e57
		return (NULL);
	space = count * size;
	memory = malloc(space);
	if (!memory)
		return (NULL);
	ft_bzero(memory, space);
	return (memory);
}
