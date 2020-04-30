
#include "ft_printf.h"

void iniliaze_t_dose(t_dose		*dose)
{
	dose = ft_memalloc(sizeof(t_dose));
	dose->number_sign = 0;
	dose->zero = 0;
	dose->minus = 0;
	dose->plus = 0;
	dose->space = 0;
	dose->period = 0;
	dose->width = 0;
	dose->precision = 0;
	dose->length_modifier = "";
	dose->format_conversion = 0;
}

bool type_field(char c)
{
	char	*fields;

	fields = "hlL";
	while (*fields)
	{
		if (c == *fields)
			return (1);
		fields++;
	}
	return (0);
}

const char *adding_length_modifier(t_dose *dose, const char *format)
{
	char *k;
	k = "";
	if (type_field(*format))
	{
		k =  malloc(sizeof(char) * 2);
		k[0] = *format++;//правильно ли
		if( *format == 'h' || *format == 'l')
			k[1] = *format++;
	}
	dose->length_modifier = k;
	return (format);
}

const char *adding_precision(t_dose *dose, const char *format)
{
	int i;
	i = 0;
	if (*format == '.')
	{
		format++;
		while(*format <= 57 && *format >= 48)//тут по табличке ASCII
		{
			i = 10*i + *format -48;
			format++;
		}
		dose->precision = i;
	}
	return(format);
}

const char *adding_width(t_dose *dose, const char *format)
{
	int i;
	i = 0;
	while(*format <= 57 && *format >= 48)//тут по табличке ASCII
	{
		i = 10*i + *format -48;
		format++;
	}
	dose->width = i;
	return (format);

}

const char *adding_flags(t_dose *dose, const char *format)
{
	while((*format == '#') || (*format == '0') || (*format == '-' || (*format == ' ' || (*format == '+'))))
	{
		if (*format == '#')
			dose->number_sign = 1;
		else if (*format == '0')
			dose->zero = 1;
		else if (*format == '-')
			dose->minus = 1;
		else if (*format == ' ')
			dose->space = 1;
		else if (*format == '+')
			dose->plus = 1;
		format++;
	}
	return(format);
}


const char *adding_t_dose(const char *format, t_dose *dose)//сюда закидываем новую строку
{
	iniliaze_t_dose(dose);
	format = adding_flags(dose ,format);
	format = adding_width(dose , format);
	format = adding_precision(dose , format);
	format = adding_length_modifier(dose , format);
	dose->format_conversion = *format;
	format++;
	return(format);
}
