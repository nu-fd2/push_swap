/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_make_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:54:30 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/09 19:41:57 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *s_make_a(char **av, int size)
{
	int 	*arr;
	int 	i;
	t_stack *a;
	t_stack *head;

	i = 0;
	arr = s_data(av, size);
	a = s_make_empty(size);
	head = s_put(arr, a, size);
	ft_printf("a : ");
	s_print(a);
	if (!head)
	{
		free(arr);
		s_free(head);
		is_error();
	}
	return (a);
}
