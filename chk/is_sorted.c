/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:27:55 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 12:41:44 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_sorted(t_stack **head)
{
	t_stack	*t;
	long	tmp;

	t = *head;
	tmp = -2;
	while (t)
	{
		if (t->index < tmp)
			return (0);
		tmp = t->index;
		t = t->next;
	}
	return (1);
}
