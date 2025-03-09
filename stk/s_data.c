/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_data.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:11:55 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/09 22:20:57 by oel-mado         ###   ########.fr       */
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

int is_it_multi(int data, int *arr, int in)
{
	int i;

	i = 0;
	while (i < in)
	{
		if (data == arr[i])
			return (1);
		i++;
	}
	return (i);
}

int *s_data(char **av, int size)
{
	int		i;
	int		j;
	int		*arr;
	long	data;

	i = 0;
	j = 0;
	data = 0;
	arr = ft_calloc(size, 4);
	ft_printf("arr[0] = %s\n", av[0]);
	while (i < size)
	{
		data = s_atoi(av[i]);
		if (is_it_there((int)data, arr, i) == 1 || data == 696969696969)
		{
			free(arr);
			is_error();
		}
		i += is_it_multi((int)data, arr, i);
	}
	return (arr);
}
