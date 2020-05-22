
#include "ft_printf.h"

char *convert(intmax_t num, int base, int a)// a= 0 маленькие, a = 1 большие
{
	char *Representation;
	char *buffer;
	char *ptr;

	Representation = malloc(sizeof(char)* 16);
	if (a == 1)
		Representation = ft_strcpy(Representation , "0123456789ABCDEF");
	else
		Representation = ft_strcpy(Representation , "0123456789abcdef");
	buffer = malloc(sizeof(char)* 50);
	ptr = &buffer[49];
	*ptr = '\0';
	while(num != 0)
	{
		*--ptr = Representation[num%base];
		num /= base;
	}
	ft_strdel(&Representation);
	return(ptr);
}

char *ft_precision_join(int i,char **num)//i точность, нум число
{
	char *f;
	char *f1;
	int j;

	j = 0;
	if(i < 0)
		i = 0;
	f1 = malloc(sizeof(char)* i + 1);
	while(i-- > 0)
		f1[j++] = '0';
	f1[j] = '\0';
	f = ft_strjoin_free2(&f1, num);
	return (f);
}

int print_o(t_dose	*dose, va_list arg,  int count)
{
	intmax_t num;
	char *l;
	num = va_arg(arg, intmax_t);
	num = (!ft_strcmp(dose->length_modifier, "l")) ? (long)num : num;
	num = (!ft_strcmp(dose->length_modifier, "ll")) ? (long long)num : num;
	num = (ft_strlen(dose->length_modifier) == 0) ? (unsigned int)num : num;
	num = (!ft_strcmp(dose->length_modifier, "h")) ? (short)num : num;
	num = (!ft_strcmp(dose->length_modifier, "hh")) ? (signed char)num : num;
	if (num == '\0' && dose->precision == 0 && dose->period == 1 && dose->number_sign == 0)
		return(count);
	l = convert(num, 8, 0);
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