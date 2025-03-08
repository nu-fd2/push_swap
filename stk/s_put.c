/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_put.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:00:29 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/08 09:52:28 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*s_put(int *arr, t_stack *node, int size)
{
	int		i;
	t_stack *head;

	i = 0;
	head = node;
	while (i < size)
	{
		if (!node)
			return (NULL);
		if (node->is_null == false)
			return (NULL);
		node->data = arr[i];
		i++;
	}
	return (head);
}
