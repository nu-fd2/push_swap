/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:40:34 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/24 02:32:50 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

bool skip_space(char *arg, int i)
{
	while (arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
		i++;
	if (!arg[i])
		return (true);
	return (false);
}

bool skip_number(char *arg, int i)
{
	while (arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (arg[i] == '-' || arg[i] == '+')
		return (false);
	if (!arg[i])
		return (true);
	return (false);
}

bool skip_sign(char *arg, int i)
{
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	if (!arg[i])
		return (true);
	return (false);
}

void again(char *arg, int i)
{
	skip_space(arg, i);
	if (skip_sign(arg, i))
		return ;
	if (!skip_number(arg, i))
		again(arg, i);
}

bool is_number(char *arg)
{
	static int i;

	i = 0;
	while (arg[i])
	{
		if (skip_space(arg, i))
			return (1);
		if (skip_sign(arg, i))
			return (1);
		if (!skip_number(arg, i))
			again(arg, i);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int in = 1;
	while (in < ac)
	{
		ft_printf("\033[1;33m%d: \033[0m", in);
		if (!is_number(av[in]))
			ft_printf("\033[1;31mKO\033[0m ");
		else
			ft_printf("\033[1;32mOK\033[0m\n");
		ft_printf("\033[1;33m%s\033[0m\n", av[in]);
		in++;
	}
	ft_printf("\033[1;34mEND.\033[0m\n");
}