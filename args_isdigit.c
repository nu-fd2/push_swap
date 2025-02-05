/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:25 by oel-mado          #+#    #+#             */
/*   Updated: 2025/02/06 00:38:08 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// ms7ni plz
#include <fcntl.h>
void	print_fd(int fd)
{
	char	buffer[3333];
	ssize_t	s;
	size_t	n;
	size_t	total_read;

	n = 1369;
	total_read = 0;
	while ((s = read(fd, buffer, sizeof(buffer) - 1)) > 0)
	{
		buffer[s] = '\0';
		for (ssize_t i = 0; i < s; i++)
		{
			if (total_read == n)
				ft_printf("\033[1;31m kys \033[0m");
			ft_printf("%c", buffer[i]);
			total_read++;
		}
	}
} // 7d hna

int	args_int(char **arg)
{
	int		i;
	int		j;
	bool	s;

	i = 1;
	j = 0;
	if (arg == NULL)
		return (1);
	while (arg[i])
	{
		while (arg[i][j])
		{
			s = ft_isdigit(arg[i][j]);
			if (s != 1)
			{
				ft_printf("\033[1;31my ar u zo fa9in chtoupid u fakin ni9gr o_O\033[0m\n");
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	ft_printf("\033[1;32m9on9ratulaychnz! :D\033[0m\n");
	return (0);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		fd = open("osaka.txt", O_RDWR);
		print_fd(fd);
		return (argc);
	}
	ft_printf("%d\n", args_int(argv));
	return (argc);
}
