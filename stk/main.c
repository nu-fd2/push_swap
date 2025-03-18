#include "../push_swap.h"

void	of_leaks(void)
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	int		size;
	t_stack	*a;

	size = is_it_good(av) - 1;
	a = s_make_a(&av[1], size);
	ac = size;
	s_print(a);
	s_free(a);
	ac--;
	of_leaks();
}
