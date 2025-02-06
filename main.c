/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:45:11 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/06 14:15:34 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char *s = malloc(2);
	t_list *lst;
	if (argc == 1)
		osaka();
	s[0] = 'n';
	s[1] = '\0';
	ft_printf("%d\n", args_int(argv));
	lst = make_a(argv);
	if (!lst)
	{
		osaka();
		return (0);
	}
	lst_print(lst);
	ft_printf("\033[1;32mGG\033[0m\n");
	return (argc);
}
