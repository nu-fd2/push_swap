/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_data_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:11:55 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/29 21:03:25 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

bool	is_it_there(long *arr, int size)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		tmp = arr[i];
		if (tmp > 2147483647 || tmp < -2147483648)
			return (1);
		j = i + 1;
		while (j < size)
		{
			if (tmp == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

long	*s_arav(char **av, int size)
{
	long (i), (j), (k), (*arr);
	arr = ft_calloc(size, sizeof(long));
	i = 0;
	k = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+'
				|| (av[i][j] <= '9' && av[i][j] >= '0'))
			{
				arr[k++] = s_atoi(&av[i][j]);
				if (av[i][j] == '-' || av[i][j] == '+')
					j++;
				while (av[i][j] <= '9' && av[i][j] >= '0')
					j++;
			}
			else
				j++;
		}
		i++;
	}
	return (arr);
}

long	*s_data(char **av, int size)
{
	int		i;
	long	*data;

	i = 0;
	data = s_arav(av, size);
	while (i < size)
	{
		if (is_it_there(data, size) == 1)
		{
			free(data);
			is_error();
		}
		i++;
	}
	return (data);
}
