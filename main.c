/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:34:32 by yartym            #+#    #+#             */
/*   Updated: 2025/10/27 13:59:15 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*str = "Hello world";
	char	sep = ' ';

	char **new = ft_split(str, sep);
	for (int i = 0; i < 2; i++)
		printf("%s\n", new[i]);

	free(new);
}
