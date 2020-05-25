
#include "ft_printf.h"

int print_oo(t_dose	*dose, va_list arg,  int count)
{
	char *l;
	l = malloc(sizeof(char)*2);
	l = ft_strcpy(l, "%");
	ft_putstr(l);
	count = count + ft_strlen(l);
	ft_strdel(&l);
	return(count);
}

