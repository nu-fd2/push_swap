/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:36:12 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/28 08:11:28 by oel-mado         ###   ########.fr       */
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


void	s_stack(t_stack **head, bool s)
{
	t_stack	*t;
	int		in;
	int		tmp;
	char	*m;
	char	*red = "\033[1;41m";
	char	*green = "\033[1;42m";
	char	*blue = "\033[1;44m";
	char	*purple = "\033[1;45m";
	char	*end = "\033[0m";
	char	*yes = green;
	char	*no = red;

	if (s == 1)
	{
		write(1, "----------------------------------------", 40);
		write(1, "\n\n", 2);
		yes = blue;
		no = purple;
	}
	else
		write(1, "\e[1;1H\e[2J", 10);
	t = *head;
	tmp = -2;
	while (t)
	{
		in = 0;
		if (tmp != -1 && t->index < tmp)
		{
			while (in <= t->index)
			{
				in++;
				write(1, no, 7);
				write(1, " ", 1);
				write(1, end, 4);
			}
		}
		else if (tmp != -1 && t->index > tmp)
		{
			while (in <= t->index)
			{
				in++;
				write(1, yes, 7);
				write(1, " ", 1);
				write(1, end, 4);
			}
		}
		else if (tmp == -1)
			write(1 ,"\033[33;1mE\033[0m", 12);
		m = ft_itoa(t->data);
		if (m)
		{
			write(1 , " ", 1);
			ft_putstr_fd(m, 1);
			free(m);
		}
		write(1 , "\n", 1);
		tmp = t->index;
		t = t->next;
	}
	if (s == 1)
		usleep(100000);
}
