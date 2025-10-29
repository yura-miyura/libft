/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:34:32 by yartym            #+#    #+#             */
/*   Updated: 2025/10/29 09:13:25 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list *list = NULL;
	ft_lstadd_back(&list, ft_lstnew("hello "));
	ft_lstadd_back(&list, ft_lstnew("this "));
	ft_lstadd_back(&list, ft_lstnew("is "));
	while (list->next)
	{
		printf("%s\n",(char *) list->content);
		list = list->next;
	}
	printf("%s\n",(char *) list->content);
}
