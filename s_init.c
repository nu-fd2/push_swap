/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_init.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/03 20:20:15 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void s_init(char **arr, t_list *a)
{
	int i;
	int j;
	bool s;

	i = 0;
	j = 0;
	while (arr[i])
	{
		while (arr[i][j])
		{
			s = ft_isdigit(arr[i][j]);
			if (s != 0)
			{
				ft_printf();
			}
		}
		i++;
	}
}
