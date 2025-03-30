/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:55:15 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:03:09 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap_bonus.h"

void	reverse_rotate(t_stack **who)
{
	t_stack	*fst;
	t_stack	*lst;
	t_stack	*tmp;
	t_stack	*head;

	fst = *who;
	lst = last(who);
	tmp = (fst->prev)->prev;
	head = lst;
	if (lst->next == NULL)
		(lst->prev)->next = NULL;
	else
	{
		tmp = (fst->prev);
		(lst->prev)->next = lst->next;
		(lst->next)->prev = lst->prev;
	}
	fst->prev = lst;
	lst->next = fst;
	lst->prev = tmp;
	tmp = lst;
	fst->is_head = 0;
	head->is_head = 1;
	*who = head;
}
