
#include "ft_printf.h"

char *ft_0x(t_dose	*dose, char **l)
{
	char *pr;
	pr = malloc(sizeof(char)*3);
	if (dose->format_conversion == 'x')
		pr = ft_strcpy(pr, "0x");
	else if (dose->format_conversion == 'X')
		pr = ft_strcpy(pr, "0X");
	pr = ft_strjoin_free2(&pr, l);
	return(pr);
}

int print_xX(t_dose	*dose, va_list arg,  int count)
{
	intmax_t num;
	char *l;
	num = va_arg(arg, intmax_t);
	num = (!ft_strcmp(dose->length_modifier, "l")) ? (long)num : num;
	num = (!ft_strcmp(dose->length_modifier, "ll")) ? (long long)num : num;
	num = (ft_strlen(dose->length_modifier) == 0) ? (unsigned int)num : num;
	num = (!ft_strcmp(dose->length_modifier, "h")) ? (short)num : num;
	num = (!ft_strcmp(dose->length_modifier, "hh")) ? (signed char)num : num;

	//num = (unsigned int) va_arg(arg, void *);
	if (num == '\0' && dose->precision == 0 && dose->period == 1)
		return (count);
	if (num == 0)
		dose->number_sign = 0;
	if (dose->format_conversion == 'x')
			l = convert(num, 16, 0);
	else if (dose->format_conversion == 'X')
		l = convert(num, 16, 1);
	if (dose->precision == 0 && dose->period == 0)
		dose->precision = 1;
	l = ft_precision_join(dose->precision- ft_strlen(l), &l);
	if (dose->zero == 1 && dose->number_sign == 1)
	{
		dose->width -=2;
		l = ft_join_width(dose, &l, num);
		l = ft_0x(dose, &l);
	}
	else
	{
		if (dose->number_sign == 1)
			l = ft_0x(dose, &l);
		l = ft_join_width(dose, &l, num);
	}
	ft_putstr(l);
	count = count + ft_strlen(l);
	ft_strdel(&l);
	return (count);
}
