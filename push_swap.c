/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:31 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 10:10:50 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		size;
	t_stack	*a;
	t_stack	*b;

	size = is_it_good(av) - 1;
	a = s_make_a(&av[1], size);
	b = s_make_empty(size, 1);
	ac = size;
	s_print(a);
	if (size == 1)
		ft_printf("\n");
	else if (size == 2)
		a_two(&a);
	else if (size == 3)
		a_three(&a);
	else if (size == 4)
		a_four(&a, &b);
	else if (size == 5)
		a_five(&a, &b);
	s_print(a);
	// s_print_rev(a);

	s_free(a);
	s_free(b);
	ac--;
	// of_leaks();
	return (0);
}
