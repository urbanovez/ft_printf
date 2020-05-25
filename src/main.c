
#include "ft_printf.h"
#include <stdio.h>

#include <limits.h>


int main()
{
    int i;
    int i1;
    char *f;

//    printf("\n");
	//f = malloc(sizeof(char)*50);
	i = ft_printf("%s","LYDI");
    ft_printf("\n");
    i1 = printf("%%-*.3s LYDI == |%-*.3s|", 5, "LYDI");
    printf("\n%d %d", i, i1);


	return (0);
}


