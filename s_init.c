/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_init.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:22 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/06 00:53:12 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *s_make(char **arg)
{
	int i;
	t_list *head;
	t_list *lst;
	t_list *neo;

	i = 1;
	head->content = ft_atoi(arg[i]);
	lst = head;
	while (arg[i])
	{
		neo = ft_lstnew(arg[i]);
		lst->next = neo;
		lst = lst->next;
		i++;
	}
	lst->next = NULL;
	return (head);
}
