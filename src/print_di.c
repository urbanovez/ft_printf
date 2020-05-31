/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_join_width(t_dose *dose, char **i1)
{
	int		l;
	char	*i2;

	if (dose->width <= (int)ft_strlen(*i1))
		return (*i1);
	l = (dose->width - (int)ft_strlen(*i1));
	if (dose->minus == 1)
		i2 = width_join(l, ' ', i1, 1);
	else if (dose->zero == 1)
		i2 = width_join(l, '0', i1, 0);
	else
		i2 = width_join(l, ' ', i1, 0);
	return (i2);
}

char	*ft_join_sign(t_dose *dose, char **i1)
{
	int		i;
	char	*number_s;
	char	*sign;

	i = 1;
	sign = *i1;
	number_s = malloc(sizeof(char) * (ft_strlen(*i1) + 2));
	if (((dose->plus == 0 && dose->space == 0) || *i1[0] == '-') &&
		(dose->number_sign == 0 || dose->format_conversion == 'f'))
	{
		number_s = ft_strcpy(number_s, *i1);
		ft_strdel(&sign);
		return (number_s);
	}
	number_s[0] = (dose->plus == 1) ? '+' : ' ';
	if (dose->number_sign == 1)
		number_s[0] = '0';
	while (**i1)
	{
		number_s[i++] = **i1;
		(*i1)++;
	}
	number_s[i] = '\0';
	ft_strdel(&sign);
	return (number_s);
}

char	*ft_zero(t_dose *dose, intmax_t num, char **i1)
{
	if (num == '\0' && dose->precision == 0 && dose->period == 1)
		*i1[0] = '\0';
	return (*i1);
}

int		print_di(t_dose *dose, va_list arg, int count)
{
	char		*i1;
	intmax_t	num;

	num = va_arg(arg, intmax_t);
	num = (!ft_strcmp(dose->length_modifier, "l")) ? (long)num : num;
	num = (!ft_strcmp(dose->length_modifier, "ll")) ? (long long)num : num;
	num = (!ft_strcmp(dose->length_modifier, "z")) ? (size_t)num : num;
	num = (!ft_strcmp(dose->length_modifier, "j")) ? (intmax_t)num : num;
	num = (ft_strlen(dose->length_modifier) == 0) ? (int)num : num;
	num = (!ft_strcmp(dose->length_modifier, "h")) ? (short)num : num;
	num = (!ft_strcmp(dose->length_modifier, "hh")) ? (signed char)num : num;
	i1 = ft_intmax_toa(num);
	i1 = ft_zero(dose, num, &i1);
	dose->precision = (dose->precision == 0 &&
			dose->period == 0) ? 1 : dose->precision;
	i1 = ft_join_pr(dose->precision - ft_strlen(i1), &i1);
	i1 = ft_join_sign(dose, &i1);
	i1 = ft_join_width(dose, &i1);
	ft_putstr(i1);
	count = count + ft_strlen(i1);
	ft_strdel(&i1);
	return (count);
}

char	*ft_join_pr(int i, char **i1)
{
	int k;

	k = 0;
	if (*i1[0] == '-')
	{
		k = 1;
		i++;
		*i1 = ft_delete_minus(i1);
	}
	*i1 = ft_precision_join(i, i1);
	if (k == 1)
		*i1 = ft_join_minus(i1, '-');
	return (*i1);
}
