/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int p(char *num, int l, char s, int order)
{
	int count;

	count = 0;
	if (order == 0)
	{
		ft_putstr(num);
		while (l-- > 0 )
			count = ft_putchar_and_count(' ', count);
	}
	else
	{
		while (l-- > 0)
			count = ft_putchar_and_count(' ', count);
		ft_putstr(num);
	}
	return(count);
}

int print_s(t_dose	*dose, va_list arg, int c)
{
	char *num;
	int i;

	num = (char*)va_arg(arg, void *);
	if (num == NULL)
	{
		if (dose->precision < 6 && dose->period == 1)
			return (c + p("", dose->width, ' ', 1));
		num = malloc(sizeof(char)* 7);
		num = ft_strcpy(num, "(null)");
	}
	i = ft_strlen(num);
	num = ft_use_precision(num, dose->precision, dose->period);
	if(dose-> width - (int)ft_strlen(num) >0)
		c = (dose->minus == 1) ? c + p(num, (dose->width - 
		(int)ft_strlen(num)), ' ', 0) : c + 
		p(num, (dose-> width - (int)ft_strlen(num)), ' ', 1);
	else
		ft_putstr(num);
	c = c + ft_strlen(num);
	if ((i - dose->precision > 0 && dose->period == 1) || !ft_strcmp(num, "(null)"))
		ft_strdel(&num);
	return (c);
}

int ft_putchar_and_count(char num, int count)
{
	ft_putchar(num);
	return (++count);
}

int print_c(t_dose	*dose, va_list arg,  int count)
{
	int l;
	char num;

    num = va_arg(arg, intmax_t);
	if(dose->width >0)
	{
		l = (dose->width - 1);
			if (dose->minus == 1)
			{
				count = ft_putchar_and_count(num, count);
				while (l-- > 0)
					count = ft_putchar_and_count(' ', count);
			}
			else
			{
				while (l-- > 0)
					count = ft_putchar_and_count(' ', count);
				count = ft_putchar_and_count(num, count);
			}
		}
	else
		count = ft_putchar_and_count(num, count);
	return (count);
}
