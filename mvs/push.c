/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:53:09 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/20 09:29:13 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **from, t_stack **to, char c)
{
	t_stack	*A;
	t_stack	*B;
	t_stack	*An;
	t_stack	*Bf;
	t_stack	*Ap;
	t_stack	*Bp;
	t_stack	*Ah;
	t_stack	*Bh;
	t_stack	*Al;
	t_stack	*Bl;
	A = *from;
	B = (*to)->prev;
	An = (*from)->next;
	Bf = *to;
	Ap = (*from)->prev;
	Bp = ((*to)->prev)->prev;
	Ah = An;
	Bh = A;
	Al = B;
	Bl = Bp;
	An->prev = B;
	B->next = NULL;
	B->prev = Ap;
	Ap->next = B;
	A->next = Bf;
	A->prev = Bp;
	Bp->next = NULL;
	Bf->prev = A;
	An->is_head = 1;
	Bf->is_head = 0;
	*to = Bh;
	*from = Ah;
	ft_printf("p%c\n", c);
}
