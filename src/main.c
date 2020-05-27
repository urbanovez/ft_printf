
#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>


int main()
{
    int i;
    int i1;

	i = ft_printf("%+d",-56);
    ft_printf("\n");
    i1 = printf("%#d", 56);
    printf("\n%d %d", i, i1);
	return (0);
}


