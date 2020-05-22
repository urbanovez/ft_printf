
#include "ft_printf.h"

char *ft_use_precision(char *num, int precision, int period)
{
	int i;
	char *num2;
	if (((int)ft_strlen(num)- precision) <= 0 || period == 0)
		return(num);
	else
	{
		num2 = malloc(sizeof(char)* (precision + 1));
		i = 0;
		while(precision-- > 0)
		{
			num2[i] = num[i];
			i++;
		}
	}
	num2[i] = '\0';
	return(num2);
}

int print_s(t_dose	*dose, va_list arg, int count)
{
	int l;
	char *num;
	int i;

	//num = va_arg(arg, char *);
	num = (char*)va_arg(arg, void *);
	i = ft_strlen(num);
	num = ft_use_precision(num, dose->precision, dose->period);
	if(dose->width >0)
	{
		l = (dose-> width - (int)ft_strlen(num));
		if(l > 0)//мб можно убрать
		{
			if (dose->minus == 1)
			{
				ft_putstr(num);
				while (l-- > 0 )
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
	if (i - dose->precision <= 0)
		ft_strdel(&num);
	return (count);
}

int int_strlen(int i)
{
	int k;
	k = 0;
	if (i < 0)
	{
		i = -i;
		k++;
	}
	while(i > 0)
	{
		 i = i/10;
		 k++;
	}
	return (k);
}

int print_c(t_dose	*dose, va_list arg,  int count)
{
	int l;
	char num;
    num = va_arg(arg, intmax_t);
	//num = (char)va_arg(arg, void *); //второй аргумент, это след аргумент на подачу
	if(dose->width >0)//попробовать вместо count count+l
	{
		l = (dose->width - 1);
		if(l > 0)//мб можно убрать
		{
			if (dose->minus == 1)
			{
				ft_putchar(num);
				count++;
				while (l-- > 0)
				{
					ft_putchar(' ');
					count++;
				}
			}
			else{
				while (l-- > 0)
				{
					ft_putchar(' ');
					count++;
				}
				ft_putchar(num);
				count++;
			}
		}
	}
	else
	{
		ft_putchar(num);
		count++;
	}
	return (count);
}