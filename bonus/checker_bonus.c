/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:36:12 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 11:08:51 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	int		size;
	t_stack	*a;
	t_stack	*b;

	size = is_it_good(av) - 1;
	a = s_make_a(&av[1], size);
	b = s_make_empty(size, 1);
	a_index(&a, size);
	get_op(&a, &b);
	if (is_sorted(&a) && b->is_null)
		write(1, "\033[1;32mOK\033[0m\n", 14);
	else
		write(1, "\033[1;31mKO\033[0m\n", 14);
	s_free(a);
	s_free(b);
	ac--;
	return (0);
}
