/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-23 14:48:48 by yartym            #+#    #+#             */
/*   Updated: 2025-10-23 14:48:48 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	if (!s)
		return (NULL);
	tmp = (unsigned char *) s;
	while (n-- > 0)
		*tmp++ = c;
	return (s);
}
