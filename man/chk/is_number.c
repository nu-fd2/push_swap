/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:40:34 by oel-mado          #+#    #+#             */
/*   Updated: 2025/04/05 21:37:03 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	skip(char *arg, int i)
{
	if (!(arg[i] >= '0' && arg[i] <= '9')
		&& !(arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
		&& !(arg[i] == '-' || arg[i] == '+'))
		is_error();
	while (arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
		i++;
	if (arg[i] == '-' || arg[i] == '+')
	{
		i++;
		if (arg[i] == '-' || arg[i] == '+' || arg[i] == '\0')
			is_error();
		if (arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
			is_error();
	}
	while (arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (arg[i] == '-' || arg[i] == '+')
		is_error();
	if (!arg[i])
		return (1);
	return (0);
}

bool	first_skip(char *arg, int i)
{
	int	s;

	s = 0;
	if (!(arg[i] >= '0' && arg[i] <= '9')
		&& !(arg[i] == ' ' || arg[i] == '-' || arg[i] == '+')
		&& !(arg[i] >= 9 && arg[i] <= 13))
		is_error();
	while (arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13))
		i++;
	if (arg[i] == '-' || arg[i] == '+')
	{
		i++;
		s = 1;
	}
	if (arg[i] == '-' || arg[i] == '+')
		is_error();
	if ((arg[i] == ' ' || (arg[i] >= 9 && arg[i] <= 13)) && s == 1)
		is_error();
	if (!arg[i])
		return (1);
	return (0);
}

bool	is_number(char *arg)
{
	static int	i;

	i = 0;
	if (!arg[i] || !arg)
		is_error();
	while (arg[i])
	{
		if (first_skip(arg, i))
			is_error();
		while (arg[i] == '-' || arg[i] == '+')
			i++;
		while (arg[i] >= '0' && arg[i] <= '9')
			i++;
		if (arg[i] == '-' || arg[i] == '+')
			is_error();
		while (arg[i])
		{
			skip(arg, i);
			i++;
		}
	}
	return (0);
}
