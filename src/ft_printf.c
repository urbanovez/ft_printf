
#include "ft_printf.h"

int ft_print_types(t_dose *dose, va_list arg, int count)
{
	if (dose->format_conversion == 'c'|| dose->format_conversion == 'C')
		count = print_c(dose, arg, count);
	else if (dose->format_conversion == 's')
		count = print_s(dose, arg, count);
	else if (dose->format_conversion == 'f')
		count = print_f(dose, arg, count);
	else if (dose->format_conversion == 'd' || dose->format_conversion == 'i' || dose->format_conversion == 'D')
		count = print_di(dose, arg, count);
	else if (dose->format_conversion == 'u' || dose->format_conversion == 'U')
		count = print_u(dose, arg, count);
	else if (dose->format_conversion == 'o' || dose->format_conversion == 'O')
		count = print_o(dose, arg, count);
	else if (dose->format_conversion == 'x' || dose->format_conversion == 'X')
		count = print_xX(dose, arg, count);
	else if (dose->format_conversion == 'p')
		count = print_p(dose, arg, count);
	else if (dose->format_conversion == '%')
	{
		ft_putchar('%');
		count++;
	}
	return(count);
}


int ft_argument(const char **format_point, int count, va_list arg) {
	t_dose *dose;
	dose = malloc(sizeof(t_dose));
 	*format_point = adding_t_dose(format_point, dose);
 	if (dose->format_conversion == 'd' || dose->format_conversion == 'i' || dose->format_conversion == 'o' ||
	    dose->format_conversion == 'u' || dose->format_conversion == 'x' || dose->format_conversion == 'X')
	{
 		if (dose->period ==1)
 			dose->zero = 0;
	}
	count = ft_print_types(dose, arg, count);
 	if (dose->length_modifier[0] !='\0')
 	    ft_memdel((void **) &(dose->length_modifier)); //реально стремная хуета
 	ft_memdel((void **) &dose);
	return count;
}


int	ft_printf(const char *format, ...)
{
	va_list arg;
	int count;
	va_start(arg, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = ft_argument(&format, count, arg);
		}
		else if (*format != '%')
		{

			ft_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(arg);
	return (count);//должны возыращать количество напечатанных символов
}