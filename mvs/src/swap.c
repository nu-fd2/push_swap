/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:55:38 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 05:05:49 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_stack **who)
{
	t_stack	*st;
	t_stack	*nd;

	st = *who;
	nd = st->next;
	st->next = nd->next;
	nd->next->prev = st;
	nd->prev = st->prev;
	nd->next = st;
	st->prev = nd;
	*who = nd;
	(*who)->is_head = 1;
	st->is_head = 0;
}
