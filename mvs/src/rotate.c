/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:54:32 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 11:20:56 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_stack **who)
{
	t_stack	*head;
	t_stack	*lst;
	t_stack	*ned;

	lst = last(who);
	ned = lst->next;
	head = (*who)->next;
	head->prev = (*who)->prev;
	(*who)->prev = lst;
	lst->next = (*who);
	(*who)->next = ned;
	if ((*who)->next == NULL)
		head->prev = (*who);
	else
		ned->prev = (*who);
	(*who)->is_head = 0;
	head->is_head = 1;
	*who = head;
}
