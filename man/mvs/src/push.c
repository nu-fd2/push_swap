/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:53:09 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 20:51:54 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*nu_h_f;
	t_stack	*nu_e_t;

	nu_h_f = (*from)->next;
	nu_e_t = ((*to)->prev)->prev;
	nu_h_f->prev = (*to)->prev;
	((*to)->prev)->next = NULL;
	((*to)->prev)->prev = (*from)->prev;
	(((*to)->prev)->prev)->next = (*to)->prev;
	(*from)->next = *to;
	(*from)->prev = nu_e_t;
	nu_e_t->next = NULL;
	(*to)->prev = *from;
	nu_h_f->is_head = 1;
	(*to)->is_head = 0;
	*to = *from;
	*from = nu_h_f;
}
