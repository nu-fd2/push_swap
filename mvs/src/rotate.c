/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:54:32 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 06:07:14 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*last(t_stack **who)
{
	t_stack *tmp = *who;
	while (tmp->next && tmp->next->is_null == 0)
		tmp = tmp->next;
	return tmp;
}

void	rotate(t_stack **who)
{
	t_stack	*first;
	t_stack	*lst;

	first = *who;
	lst = last(who);

	// Detach first node
	*who = first->next;
	(*who)->is_head = true;
	(*who)->prev = first->prev;
	first->prev->next = *who;

	// Move first after the last node
	first->next = lst->next;
	if (lst->next)
		lst->next->prev = first;
	lst->next = first;
	first->prev = lst;
	first->is_head = false;
}


