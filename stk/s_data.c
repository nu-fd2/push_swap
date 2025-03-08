/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_data.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:11:55 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/08 08:23:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool is_it_there(int data, int *arr, int in)
{
	int i;

	i = 0;
	while (i < in)
	{
		if (data == arr[i])
			return (1);
		i++;
	}
	return (0);
}

int *s_data(char **av, int size)
{
	int		i;
	int		*arr;
	long	data;

	i = 0;
	data = 0;
	arr = ft_calloc(size, 4);
	while (i < size)
	{
		data = s_atoi(av[i]);
		if (data == 696969696969)
		{
			free(arr);
			is_error();
		}
		if (is_it_there((int)data, arr, i) == 1)
		{
			free(arr);
			is_error();
		}
		arr[i] = (int)data;
		i++;
	}
	return (arr);
}
