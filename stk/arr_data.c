/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:11:55 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/05 17:45:05 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/push_swap.h"

char **arr_data(char **av, int size)
{
	char **arr;

	int (i), (j), (x), (z);
	i = 0;
	j = 0;
	x = 0;
	z = 0;
	arr = ft_calloc(size, 1);
	while (av[i])
	{
		if ((av[i][j] >= '0' && av[i][j] <= '9')
			|| av[i][j] == '-' || av[i][j] == '+')
		{
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				arr[x][z] = av[i][j];
				j++;
				z++;
			}
			while (av[i][j] >= '0' && av[i][j] <= '9')
			{
				arr[x][z] = av[i][j];
				j++;
				z++;
			}
			j++;
		}
		arr[x][z++] = '\0';
		j = 0;
		z = 0;
		i++;
		x++;
	}
	return (arr);
}

#include <stdio.h>

int main(int ac, char **av)
{
    char **arr;
	arr = arr_data(av, ac);
    printf("arr [");
    for (int i = 0; arr[i]; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%s", arr[i]);
    }
    printf("]\n");
    return 0;
}
