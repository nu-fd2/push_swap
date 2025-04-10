/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_small.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 07:53:51 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/10 09:43:02 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	a_small(t_stack **a)
{
	int		i;
	int		pos;
	t_stack	*tmp;
	t_stack	*pmt;

	i = 0;
	pos = 0;
	pmt = *a;
	tmp = pmt->next;
	while (tmp && tmp->is_null != 1)
	{
		i++;
		if (pmt->data > tmp->data)
		{
			pmt = tmp;
			pos = i;
		}
		tmp = tmp->next;
	}
	return (pos);
}
