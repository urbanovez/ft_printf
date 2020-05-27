
#include "ft_printf.h"

int print_u(t_dose	*dose, va_list arg,  int count)
{
	uintmax_t num;
	char *l;

	num = va_arg(arg, intmax_t);
	num = (!ft_strcmp(dose->length_modifier, "l")) ? (long)num : num;
	num = (!ft_strcmp(dose->length_modifier, "ll")) ? (long long)num : num;
	num = (ft_strlen(dose->length_modifier) == 0) ? (unsigned int)num : num;
	num = (!ft_strcmp(dose->length_modifier, "h")) ? (unsigned short)num : num;
	num = (!ft_strcmp(dose->length_modifier, "z")) ? (size_t)num : num;
	num = (!ft_strcmp(dose->length_modifier, "hh")) ? (unsigned char)num : num;
	l = convert(num, 10, 0);
	if (num == '\0' && dose->precision == 0 && dose->period == 1)
		l[0] = '\0';
	l = ft_join_sign(dose, &l);//плюс или пробел в начале
	if (dose->precision == 0 && dose->period == 0)
		dose->precision = 1;
	l = ft_precision_join(dose->precision- ft_strlen(l), &l);
	l = ft_join_width(dose, &l);
	ft_putstr(l);
	count = count + ft_strlen(l);
	ft_strdel(&l);
	return (count);
}