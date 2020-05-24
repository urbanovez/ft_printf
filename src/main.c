
#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>


int main()
{
    int i;
    int i1;

//    printf("\n");
	i = ft_printf("test%-8p %---32p %#5.3x%#024X", "&ret", "&tret", 0x25, 0);
    ft_printf("\n");
    i1 = printf("test%-8p %---32p %#5.3x%#024X", "&ret", "&tret", 0x25, 0);
    printf("\n%d %d", i, i1);


	return (0);
}


