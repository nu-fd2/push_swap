/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_make_a_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:54:30 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:03:33 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_stack	*s_make_a(char **av, int size)
{
	long	*arr;
	t_stack	*a;
	t_stack	*head;

	arr = s_data(av, size);
	a = s_make_empty(size, 0);
	head = s_put(arr, a, size);
	if (!head)
	{
		free(arr);
		s_free(head);
		is_error();
	}
	free(arr);
	return (a);
}
