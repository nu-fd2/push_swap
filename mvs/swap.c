/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:55:38 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 00:29:55 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **who, char c)
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
	ft_printf("s%c\n", c);
}
