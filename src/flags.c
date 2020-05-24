
#include "ft_printf.h"

void iniliaze_t_dose(t_dose		*dose)
{
	//dose = ft_memalloc(sizeof(t_dose));
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

	fields = "zhlLj";
	while (*fields)
	{
		if (c == *fields)
			return (1);
		fields++;
	}
	return (0);
}

const char *adding_length_modifier(t_dose *dose, const char **format_point)
{
	char *k;
	k = "";
	if (type_field(**format_point))
	{
		k =  malloc(sizeof(char) * 3);
		k[2] = '\0';
		k[1] = '\0';
		k[0] = *(*format_point)++;

		if( **format_point == 'h' || **format_point == 'l')
			k[1] = *(*format_point)++;
	}
	dose->length_modifier = k;
	//ft_strdel(&k);
	return (*format_point);
}

const char *adding_precision(t_dose *dose, const char **format_point) {
	int i;
	i = 0;
	if (**format_point == '.')
	{
		(*format_point)++;
		while(**format_point <= 57 && **format_point >= 48)//тут по табличке ASCII
		{
			i = 10*i + **format_point -48;
			(*format_point)++;
		}
		dose->precision = i;
		dose->period = 1;
	}
	return(*format_point);
}

const char *adding_width(t_dose *dose, const char **format_point)
{
	int i;
	i = 0;
	while(**format_point <= 57 && **format_point >= 48)//тут по табличке ASCII
	{
		i = 10*i + **format_point -48;
		(*format_point)++;
	}
	dose->width = i;
	return (*format_point);

}

const char *adding_flags(t_dose *dose, const char **format_point)
{
	while((**format_point == '#') ||
			(**format_point == '0') ||
			(**format_point == '-' ||
			(**format_point == ' ' ||
			(**format_point == '+'))))
	{
		if (**format_point == '#')
			dose->number_sign = 1;
		else if (**format_point == '0')
			dose->zero = 1;
		else if (**format_point == '-')
			dose->minus = 1;
		else if (**format_point == ' ')
			dose->space = 1;
		else if (**format_point == '+')
			dose->plus = 1;
		(*format_point)++;
	}
	return(*format_point);
}


const char *adding_t_dose(const char **format_point, t_dose *dose) { //сюда закидываем новую строку
	iniliaze_t_dose(dose);
	*format_point = adding_flags(dose ,format_point);
	*format_point = adding_width(dose , format_point);
	*format_point = adding_precision(dose , format_point);
	*format_point = adding_length_modifier(dose , format_point);
	dose->format_conversion = **format_point;
	if (dose->format_conversion == 'O')
		dose->format_conversion = 'o';
	if (dose->minus == 1)
		dose->zero = 0;
	if (dose->plus == 1)
		dose->space = 0;
	(*format_point)++;
	return(*format_point);
}
