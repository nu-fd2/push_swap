#include "push_swap.h"

void    pri(t_stack *head)
{
	int data;
	int size;

	size = 0;
	if (!head)
		ft_printf("\033[1;31mhead 5awi a zmr\033[0m\n");
	while (head)
	{
		size++;
		data = head->data;
		if (data == 0)
            ft_printf("\033[1;31m%d\033[0m", 0);
        else if (data < 0)
            ft_printf("\033[4;1;34m%d\033[0m", data);
		else
			ft_printf("\033[1;36m%d\033[0m", data);
		ft_printf("\033[1;37m->\033[0m");
		head = head->next;
	}
	ft_printf("\033[1;35mNULL\033[0m");
	ft_printf("\033[1;33m %d\033[0m\n", size);
}

int main()
{
    int i = -9;
    t_stack *hed;
    t_stack *old;
    t_stack *new;

    old = ft_stacknew(i);
	i++;
	hed = old;
    while (i < 35)
    {
        new = ft_stacknew(i);
        old->next = new;
        old = old->next;
        i++;
    }
    pri(hed);
	ft_del(&hed);
}
