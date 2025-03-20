/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:36 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/20 07:40:46 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>

typedef struct s_stack
{
	int				data;
	int				index;
	bool			is_null;
	bool			is_head;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// stk

long	s_atoi(const char *str);
long	*s_data(char **av, int size);
void	s_free(t_stack *stk);
t_stack	*s_make_empty(int size);
t_stack	*s_make_a(char **args, int size);
t_stack	*s_one(int data, bool is_null, bool is_head);
t_stack	*s_put(long *arr, t_stack *node, int size);

void	of_leaks(void);
void	s_print(t_stack *head);
void	s_print_rev(t_stack *head);

// chk

void	is_error();
bool	is_number(char *arg);
int		is_it_good(char **arg);
int		is_multi_arg(char *arg);

// mvs

void	push(t_stack **from, t_stack **to, char c);
void	swap(t_stack **who, char c);

#endif // PUSH_SWAP_H
