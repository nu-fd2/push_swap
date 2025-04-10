/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:31 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/10 08:18:16 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fun(t_stack **a, t_stack **b, int size)
{
	if (size == 1)
		return ;
	else if (size == 2)
		a_two(a);
	else if (size == 3)
		a_three(a);
	else if (size == 4)
		a_four(a, b);
	else if (size == 5)
		a_five(a, b);
	else
	{
		a_atob(a, b, size);
		a_btoa(a, b, size);
	}
}

int	main(int ac, char **av)
{
	int		size;
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		return (0);
	size = is_it_good(av) - 1;
	a = s_make_a(&av[1], size);
	b = s_make_empty(size, 1);
	a_index(&a, size);
	if (!is_sorted(&a))
		fun(&a, &b, size);
	s_free(a);
	s_free(b);
	ac--;
	return (0);
}
