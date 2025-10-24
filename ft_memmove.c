/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-24 11:11:07 by yartym            #+#    #+#             */
/*   Updated: 2025-10-24 11:11:07 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	if (!dest)
		return (NULL);
	tmp_src = src;
	tmp_dest = dest;
	if (tmp_dest <= tmp_src)
		while (n--)
			*tmp_dest++ = *tmp_src++;
	else
	{
		tmp_dest += n;
		tmp_src += n;
		while (n--)
			*--tmp_dest = *--tmp_src;
	}
	return (dest);
}
