/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:31 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/20 09:40:12 by oel-mado         ###   ########.fr       */
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
	b = s_make_empty(size);
	ac = size;
	ft_printf("\033[1;32mA Before : \33[0m");
	s_print(a);
	// s_print_rev(a);
	ft_printf("\033[1;32mB Before : \33[0m");
	s_print(b);
	// s_print_rev(b);
	push(&a, &b, 'b');
	ft_printf("\033[1;33mA After : \33[0m");
	s_print(a);
	// s_print_rev(a);
	ft_printf("\033[1;33mB After : \33[0m");
	s_print(b);
	// s_print_rev(b);
	push(&a, &b, 'b');
	ft_printf("\033[1;33mA After : \33[0m");
	s_print(a);
	// s_print_rev(a);
	ft_printf("\033[1;33mB After : \33[0m");
	s_print(b);
	// s_print_rev(b);
	push(&a, &b, 'b');
	ft_printf("\033[1;33mA After : \33[0m");
	s_print(a);
	// s_print_rev(a);
	ft_printf("\033[1;33mB After : \33[0m");
	s_print(b);
	// s_print_rev(b);
	push(&b, &a, 'a');
	ft_printf("\033[1;33mA After : \33[0m");
	s_print(a);
	// s_print_rev(a);
	ft_printf("\033[1;33mB After : \33[0m");
	s_print(b);
	// s_print_rev(b);
	s_free(a);
	s_free(b);
	ac--;
	// of_leaks();
	return (0);
}
