/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:36:12 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 02:52:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	of_leaks()
{
	system("leaks checker");
}

void	in_push(t_stack **a, t_stack **b, char *op)
{
	if (op[2] != '\n')
	{
		free(op);
		// s_free(*a);
		// s_free(*b);
		is_error();
	}
	else
	{
		if (op[1] == 'a')
			pa(a, b);
		if (op[1] == 'b')
			pb(a, b);
	}
}

void	in_swap(t_stack **a, t_stack **b, char *op)
{
	if (op[2] != '\n')
	{
		free(op);
		// s_free(*a);
		// s_free(*b);
		is_error();
	}
	else
	{
		if (op[1] == 'a')
			sa(a);
		if (op[1] == 'b')
			sb(b);
		if (op[1] == 's')
			ss(a, b);
	}
}

void	in_rotate(t_stack **a, t_stack **b, char *op)
{
	if (op[2] == '\n')
	{
		if (op[1] == 'a')
			ra(a);
		if (op[1] == 'b')
			rb(b);
		if (op[1] == 'r')
			rr(a, b);
	}
	else if (op[1] == 'r' && op[3] == '\n')
	{
		if (op[2] == 'a')
			rra(a);
		if (op[2] == 'b')
			rrb(a);
		if (op[2] == 'r')
			rrr(a, b);
	}
	else
	{
		free(op);
		// s_free(*a);
		// s_free(*b);
		is_error();
	}
}

void	do_op(t_stack **a, t_stack **b, char *op)
{
	if (op[0] == 'p')
		in_push(a, b, op);
	else if (op[0] == 's')
		in_swap(a, b, op);
	else if (op[0] == 'r')
		in_rotate(a, b, op);
	else
	{
		free(op);
		// s_free(*a);
		// s_free(*b);
		is_error();
	}
}

void	get_op(t_stack **a, t_stack **b)
{
	char	*op;

	op = NULL;
	while((op = get_next_line(0)))
	{
		do_op(a, b, op);
		free(op);
	}
}

int	main(int ac, char **av)
{
	int		size;
	t_stack	*a;
	t_stack	*b;

	size = is_it_good(av) - 1;
	a = s_make_a(&av[1], size);
	b = s_make_empty(size, 1);
	a_index(&a, size);
	get_op(&a, &b);
	if (is_sorted(&a) && b->is_null)
		write(1, "\033[1;32mOK\033[0m\n", 14);
	else
		write(1, "\033[1;31mKO\033[0m\n", 14);
	// s_free(a);
	// s_free(b);
	ac--;
	of_leaks();
	return (0);
}
