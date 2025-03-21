/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:34:08 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 00:31:15 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*st;
	t_stack	*nd;

	st = *a;
	nd = st->next;
	st->next = nd->next;
	nd->next->prev = st;
	nd->prev = st->prev;
	nd->next = st;
	st->prev = nd;
	*a = nd;
	(*a)->is_head = 1;
	st->is_head = 0;
	st = *b;
	nd = st->next;
	st->next = nd->next;
	nd->next->prev = st;
	nd->prev = st->prev;
	nd->next = st;
	st->prev = nd;
	*b = nd;
	(*b)->is_head = 1;
	st->is_head = 0;
	ft_printf("ss\n");
}
