/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:34:32 by yartym            #+#    #+#             */
/*   Updated: 2025/10/23 22:47:54 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
int	main(void)
{
	// char dest1[12] = "hello ";
	char dest2[12] = "hello ";
	char *src = "hello";

	// printf("%li\n", ft_strlcat(dest1, src, 4));
	printf("%li\n", strlcat(dest2, src, 6));

	// printf("%s\n", dest1);
	// printf("%s\n", dest2);
}
