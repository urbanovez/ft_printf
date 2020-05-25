
#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>


int main()
{
    int i;
    int i1;

//    printf("\n");
	i = ft_printf("%#X", 1567);
    ft_printf("\n");
    i1 = printf("%#X", 1567);
    printf("\n%d %d", i, i1);


	return (0);
}


