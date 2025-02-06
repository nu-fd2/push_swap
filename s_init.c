/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_init.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:22 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/06 18:52:58 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void clr(void *tata)
{
	ft_bzero(tata, 4);
}

t_list *make_a(char **arg)
{
	int i = 1;
	int data;
	t_list *head;
	t_list *lst;
	t_list *neo;

	if (!arg || !arg[1])
		return (NULL);
	data = ft_atoi(arg[i]);
	lst = ft_lstnew((void *)(long)data);
	if (!lst)
		return (NULL);
	head = lst;
	while (arg[++i])
	{
		data = ft_atoi(arg[i]);
		neo = ft_lstnew((void *)(long)data); 
		if (!neo)
		{
			ft_lstclear(&head, clr);
			return (NULL);
		}
		lst->next = neo;
		lst = lst->next;
	}
	lst->next = NULL;
	return (head);
}
