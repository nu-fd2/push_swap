/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:45:11 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/21 04:31:14 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *lst;
	t_stack *lst2;
	if (argc == 1)
	{
		osaka();
		print_msg(0, 1);
	}
	ft_printf("%d\n", arg_check(argv));
	lst = make_a(argv);
	if (!lst)
	{
		osaka();
		return (0);
	}
	lst2 = make_b(argc);
	if (!lst2)
	{
		osaka();
		return (0);
	}
	lst_print(lst);
	lst_print(lst2);
	ft_printf("\033[1;32mGG\033[0m\n");
	return (argc);
}
