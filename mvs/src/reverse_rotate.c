/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:55:15 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/21 05:25:16 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// t_stack	*last(t_stack **who)
// {
// 	while((*who)->next && (*who)->is_null)
// 		*who = (*who)->next;
// 	if ((*who)->is_null)
// 		return ((*who)->prev);
// 	if ((*who)->next == NULL)
// 		return (*who);
// }

void	reverse_rotate(t_stack **who)
{
	t_stack	*tmp;

	tmp = (*who)->prev;
	tmp->next = (*who);
	(tmp->prev)->next = NULL;
	*who = tmp;
	(*who)->is_head = 1;
	((*who)->next)->is_head = 0;
}
