/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/21 06:13:56 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

int	arg_check(char **av)
{
	int		i;
	int		j;
	bool	s;
	bool	e;

	i = 1;
	j = 0;
	e = 0;
	if (!av[i])
		return (1);
	while (av[i])
	{
		while (av[i][j])
		{
			while (av[i][j] == ' ' || (av[i][j] >= 9 && av[i][j] <= 13))
				j++;
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			ft_printf("\033[1;35m%c %d %d\033[0m\n", av[i][j], i, j);
			s = ft_isdigit(av[i][j]);
			ft_printf("\033[1;31m%d\033[0m\n", s);
			if (!s && av[i][j] == '\0')
				print_msg(3, 1);
			e = 1;
			j++;
		}
		ft_printf("\033[1;34m%s\033[0m\n", av[i]);
		if (!e && av[i][j] == '\0')
			print_msg(4, 1);
		j = 0;
		i++;
	}
	return (print_msg(2, 0), 0);
}
