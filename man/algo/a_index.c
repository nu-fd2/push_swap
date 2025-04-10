/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_index.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:18:21 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 20:47:32 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_index(t_stack **a, int size)
{
	int		i;
	t_stack	*in;
	t_stack	*tmp;

	i = 0;
	while (i < size)
	{
		in = *a;
		while (in && in->index != -1)
			in = in->next;
		tmp = *a;
		while (tmp)
		{
			if (tmp->index == -1)
			{
				if (in->data > tmp->data)
					in = tmp;
			}
			tmp = tmp->next;
		}
		if (in)
			in->index = i++;
	}
}
