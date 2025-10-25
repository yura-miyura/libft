/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:36:26 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/10/25 08:50:18 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*loc;
	size_t	i;

	loc = (char *) s;
	i = ft_strlen(loc) + 1;
	while (--i > 0)
		if (*(loc + i) == c)
			return (loc + i);
	if (*loc == c)
		return (loc);
	return (NULL);
}
