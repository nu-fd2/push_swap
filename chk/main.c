#include "check.h"

int main(int ac, char **av)
{
    ft_printf("\033[1;34mac  = %d\033[0m\n", ac);
    ft_printf("\033[1;34mfun = %d\033[0m\n", is_it_good(av));
    ft_printf("\033[1;34mEND.\033[0m\n");
}
