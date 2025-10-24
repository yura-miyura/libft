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

int	main(void)
{
	char my[13] = "hello world";
	char lib[13] = "hello world";

	ft_memcpy(my + 1, my, 12);
	memcpy(lib + 1, lib, 12);

	printf("%s\n", my);
	printf("%s\n", lib);
}
