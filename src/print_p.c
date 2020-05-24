#include "ft_printf.h"

int print_p(t_dose	*dose, va_list arg,  int count)
{
	dose->format_conversion = 'x';
	dose->number_sign = 1;
	dose->length_modifier = malloc(sizeof(char) * 3);
	dose->length_modifier = ft_strcpy(dose->length_modifier, "ll");
	count = print_xX(dose, arg, count);
	return (count);
}
