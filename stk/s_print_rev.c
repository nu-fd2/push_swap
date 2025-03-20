/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_print_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 01:47:57 by oel-mado          #+#    #+#             */
/*   Updated: 2025/03/20 09:15:32 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_print_rev(t_stack *head)
{
	int		data;
	int		size = 0;
	int		i = 0;

	// Handle case when the stack is empty
	if (!head)
	{
		ft_printf("\033[1;31mhead is NULL\033[0m\n");
		return;
	}

	// Start printing the stack from the head
	ft_printf("\033[1;35mhead %d\033[0m", (int)head->data);
	ft_printf("\033[1;37m->\033[0m");
	head = head->prev;
	size++;

	// Traverse the stack in reverse order
	while (i < 14) // Ensure head is valid
	{
		i++;
		size++;
		data = (int)head->data;

		// Print based on the value of data
		if (data == 0)
			ft_printf("\033[1;31m%d\033[0m", data); // Red for zero
		else if (data < 0)
			ft_printf("\033[4;1;34m%d\033[0m", data); // Blue for negative numbers
		else
			ft_printf("\033[1;36m%d\033[0m", data); // Cyan for positive numbers
		
		ft_printf("\033[1;37m->\033[0m");
		head = head->prev;
	}

	// End of stack
	ft_printf("\033[1;35mNULL\033[0m");
	ft_printf("\033[1;33m %d\033[0m\n", size);
}
