/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:36 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/08 09:54:11 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/src/ft_printf.h"
# include "libft/libft.h"
# include <stdbool.h>

// nah
# include <fcntl.h>


typedef struct s_stack
{
	int				data;
	bool			is_null;
	struct s_stack	*next;
}					t_stack;

// stk
long	s_atoi(const char *str);
int		*s_data(char **av, int size);
void	s_free(t_stack *stk);
t_stack	*s_make_empty(int size);
t_stack *s_make_a(char **args, int size);
t_stack	*s_one(int data, bool is_null);
t_stack	*s_put(int *arr, t_stack *node, int size);

bool is_it_there(int data, int *arr, int in);

void	s_print(t_stack *head); // rm this

// chk
void	is_error();
bool    is_number(char *arg);
int		is_it_good(char **arg);
int		is_multi_arg(char *arg);
bool    is_dup(long nb, char *arr);

// mvs



#endif // PUSH_SWAP_H
