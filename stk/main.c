#include "../main/push_swap.h"

int main(int ac, char **av)
{
	int size;
	int i;
	int data;
	t_stack *a;
	t_stack *b;

	i = 0;
	data = 0;
	size = is_it_good(av);
	a = s_make_in(av, size);
	b = s_make_empty(size);
	stk_print(a);
	stk_print(b);
}
