#include "ft_printf.h"

int print_p(t_dose	*dose, va_list arg,  int count)//пока оставим
{
	void *num;
	char *l;
	num = (void *) va_arg(arg, void *);
	l = convert(num, 16, 0);
	l = ft_strjoin("0x", l);
	ft_putstr(l);
	count = count + ft_strlen(l);
	return(count);
}
