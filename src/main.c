
#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>


int main()
{
    int i;
    int i1;

    ft_printf("%d\n", power(10,3));
	i = ft_printf("%0.10d", 110);
    ft_printf("\n");
    i1 = printf("%0.10d", 110);
    printf("\n%d %d", i, i1);
	return (0);
}


