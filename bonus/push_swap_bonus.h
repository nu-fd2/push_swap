/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:45:36 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/30 10:58:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "get_next_line/get_next_line_bonus.h"

typedef struct s_stack
{
	int				data;
	long			index;
	bool			is_null;
	bool			is_head;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// libft

void	*ft_memset(void *ptr, int n, size_t num);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t len);
char	*ft_itoa(int n);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(const char *s1);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlen(const char *who);

// stk

long	s_atoi(const char *str);
long	*s_data(char **av, int size);
void	s_free(t_stack *stk);
t_stack	*s_make_empty(int size, bool is_null);
t_stack	*s_make_a(char **args, int size);
t_stack	*s_one(int data, bool is_null, bool is_head);
t_stack	*s_put(long *arr, t_stack *node, int size);

// chk

void	is_error(void);
bool	is_number(char *arg);
int		is_it_good(char **arg);
int		is_multi_arg(char *arg);
bool	is_sorted(t_stack **head);

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

void	a_index(t_stack **a, int size);

// ops

void	get_op(t_stack **a, t_stack **b);
void	do_op(t_stack **a, t_stack **b, char *op);
void	in_push(t_stack **a, t_stack **b, char *op);
void	in_swap(t_stack **a, t_stack **b, char *op);
void	in_rotate(t_stack **a, t_stack **b, char *op);

#endif // PUSH_SWAP_BONUS_H
