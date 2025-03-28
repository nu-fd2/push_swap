/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:36:12 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/28 07:01:01 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// int	main(int ac, char **av)
// {
// 	int		size;
// 	t_stack	*a;
// 	t_stack	*b;

// 	size = is_it_good(av) - 1;
// 	a = s_make_a(&av[1], size);
// 	b = s_make_empty(size, 1);

// 	while(1)
// 	{
		
// 	}
// 	s_free(a);
// 	s_free(b);
// 	ac--;
// 	return (0);
// }


void	s_stack(t_stack **head)
{
	t_stack	*t;
	int		in;
	int		tmp;
	char	*m;

	t = *head;
	tmp = -1;
	write(1, "\e[1;1H\e[2J", 10);
	while (t)
	{
		in = 0;
		if (tmp != -1 && t->index < tmp)
		{
			while (in <= t->index)
			{
				in++;
				write(1, "\033[1;41m \033[0m", 12);
			}
		}
		else
		{
			while (in <= t->index)
			{
				in++;
				write(1, "\033[1;42m \033[0m", 12);
			}
		}
		m = ft_itoa(t->data);
		if (m)
		{
			ft_putstr_fd(m, 1);
			free(m);
		}
		write(1 ,"\n", 1);
		tmp = t->index;
		t = t->next;
	}
}
