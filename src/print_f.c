
#include "ft_printf.h"

int power(int x, int y)
{

	int i;
	int rez;

	rez = 1;
	for(i = 1; i <= y; ++i)
	{
		rez *= x;
	}
	return rez;
}

char *ft_joinzero(char **c1, int prec)
{
	int i;
	char *c2;

	i = 0;
	if (prec == 0)
		return (*c1);
	c2 = malloc(sizeof(char)* (prec + 1));
	while(i < prec)
	{
		c2[i] = '0';
		i++;
	}
	c2[prec] = '\0';
	c2 = ft_strjoin_free2(c1, &c2);
	return (c2);
}

char *ft_inttochar(t_dose	*dose, long double num)
{
	intmax_t i1;
	char *c;
	char *c1;
	int prec;

	prec = dose->precision;
	if((intmax_t)(num*(power(10, prec+1))) %10 >=5)
		num += (double)1/(power(10, prec));
	c1 = ft_intmax_toa((intmax_t)num);
	if (prec != 0 || dose -> number_sign == 1)
		c1 = ft_strjoin_free(&c1, ".\0");
	num = num - (intmax_t)num;
	num *=10;
	while(num != 0 && prec-1 >= 0)
	{
		i1= (intmax_t)num;
		c = ft_intmax_toa(i1);
		c1 = ft_strjoin_free2(&c1, &c);
		num = num - i1;
		num *=10;
		prec -= 1;
	}
	c1 = ft_joinzero(&c1, prec);
	return (c1);
}

int print_f(t_dose	*dose, va_list arg,  int count)
{
	char *i1;
	int i;
	long double num;

	i = 0;
	num = va_arg(arg,double);
	num = (!ft_strcmp(dose->length_modifier, "l")) ? (long double)num : num;
	num = (ft_strlen(dose->length_modifier) == 0) ? (double)num : num;

	if (dose->precision == 0 && dose->period == 0)
		dose->precision = 6;
	if (num < 0)
	{
		num = -num;
		i = 1;
	}
	i1 = ft_inttochar(dose, num);
	if (i == 1)
		i1 = ft_join_minus(&i1, '-');
	i1 = ft_join_sign(dose, &i1);
	i1 = ft_join_width(dose, &i1);
	ft_putstr(i1);
	count = count + ft_strlen(i1);
	ft_strdel(&i1);
	return (count);
}