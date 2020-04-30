
#include "ft_printf.h"
void print_s(t_dose	*dose, va_list arg)
{
	int l;
	char *num;
	num = (char*)va_arg(arg, void *);
	if(dose->width >0)
	{
		l = (dose->width - ft_strlen(num));
		if(l > 0)//мб можно убрать
		{
			if (dose->minus == 1)
			{
				ft_putstr(num);
				while (l-- > 0)
					ft_putchar(' ');
			}
			else{
				while (l-- > 0)
					ft_putchar(' ');
				ft_putstr(num);
			}
		}
	}
	else
		ft_putstr(num);
}


void print_c(t_dose	*dose, va_list arg)
{
	int l;
	char num;
	num = (char)va_arg(arg, void *); //второй аргумент, это след аргумент на подачу
	if(dose->width >0)
	{
		l = (dose->width - 1);
		if(l > 0)//мб можно убрать
		{
			if (dose->minus == 1)
			{
				ft_putchar(num);
				while (l-- > 0)
					ft_putchar(' ');
			}
			else{
				while (l-- > 0)
					ft_putchar(' ');
				ft_putchar(num);
			}
		}
	}
	else
		ft_putchar(num);
}

int ft_print_types(t_dose	*dose, va_list arg)
{
	if (dose->format_conversion == 'c')
		print_c(dose, arg);
	if (dose->format_conversion == 's')
		print_s(dose, arg);
	return(0);
}

const char * ft_argument(const char *format, va_list arg)
{
	int i;
	t_dose *dose;
	dose = malloc(sizeof(t_dose));
	format = adding_t_dose(format, dose);
	i = ft_print_types(dose, arg);
	return (format);
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
			format = ft_argument(format, arg);
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