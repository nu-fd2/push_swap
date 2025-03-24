/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:36 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/24 15:24:29 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>

typedef struct s_stack
{
	int				data;
	long			index;
	bool			is_null;
	bool			is_head;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// stk

long	s_atoi(const char *str);
long	*s_data(char **av, int size);
void	s_free(t_stack *stk);
t_stack	*s_make_empty(int size, bool is_null);
t_stack	*s_make_a(char **args, int size);
t_stack	*s_one(int data, bool is_null, bool is_head);
t_stack	*s_put(long *arr, t_stack *node, int size);

// shw

void	of_leaks(void);
void	s_print(t_stack *head);
void	s_print_rev(t_stack *head);
void	s_print_in(t_stack *head);
void	s_stack(t_stack **head);

// chk

void	is_error();
bool	is_number(char *arg);
int		is_it_good(char **arg);
int		is_multi_arg(char *arg);

//src

t_stack	*last(t_stack **who);
void	push(t_stack **from, t_stack **to);
void	swap(t_stack **who);
void	rotate(t_stack **who);
void	reverse_rotate(t_stack **who);

// mvs

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

// algo

void	a_two(t_stack **a);
void	a_three(t_stack **a);
void	a_five(t_stack **a, t_stack **b);
void	a_four(t_stack **a, t_stack **b);
void	a_index(t_stack **a, int size);
void	a_atob(t_stack **a, t_stack **b, int size);
void	a_btoa(t_stack **a, t_stack **b, int size);

#endif // PUSH_SWAP_H
