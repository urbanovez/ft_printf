
#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>


int main()
{
    int i;
    int i1;
    //i = printf("% .d", 0);
    //printf("\n");
//    i1 = ft_printf("% .d", 0);
//    printf("\n");
   	//i = ft_printf("%lc", 0x4e6);
    ft_printf("\n");
    i1 = printf("%lc", 0x4e6);
	//printf("%#o", 1000);
	//printf("%U", 231009999);
    printf("\n%d %d", i, i1);


	return (0);
}


