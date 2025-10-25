/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:23:19 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/10/25 08:44:09 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*loc;

	loc = (char *) s;
	while (*loc)
	{
		if (*loc == c)
			return (loc);
		loc++;
	}
	if (*loc == c)
		return (loc);
	return (NULL);
}
