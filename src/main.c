
#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>


int main()
{
    int i;
    int i1;

//    printf("\n");
	i = ft_printf("%1s", "hi");
    ft_printf("\n");
    i1 = printf("%1s", "hi");
    printf("\n%d %d", i, i1);


	return (0);
}


