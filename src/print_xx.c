/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xX.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_0x(t_dose *dose, char **l)
{
	char	*pr;

	pr = malloc(sizeof(char) * 3);
	if (dose->format_conversion == 'x')
		pr = ft_strcpy(pr, "0x");
	else if (dose->format_conversion == 'X')
		pr = ft_strcpy(pr, "0X");
	pr = ft_strjoin_free2(&pr, l);
	return (pr);
}

int		ft_xxx(t_dose *dose, char *l)
{
	int	i;

	dose->precision = (dose->precision == 0 &&
			dose->period == 0) ? 1 : dose->precision;
	l = ft_precision_join(dose->precision - ft_strlen(l), &l);
	if (dose->zero == 1 && dose->number_sign == 1)
	{
		dose->width -= 2;
		l = ft_join_width(dose, &l);
		l = ft_0x(dose, &l);
	}
	else
	{
		l = (dose->number_sign == 1) ? ft_0x(dose, &l) : l;
		l = ft_join_width(dose, &l);
	}
	ft_putstr(l);
	i = ft_strlen(l);
	ft_strdel(&l);
	return (i);
}

int		print_xx(t_dose *dose, va_list arg, int count)
{
	intmax_t	num;
	char		*l;

	num = va_arg(arg, uintmax_t);
	num = (!ft_strcmp(dose->length_modifier, "l")) ? (long)num : num;
	num = (!ft_strcmp(dose->length_modifier, "ll")) ? (long long)num : num;
	num = (ft_strlen(dose->length_modifier) == 0) ? (unsigned int)num : num;
	num = (!ft_strcmp(dose->length_modifier, "h")) ? (unsigned short)num : num;
	num = (!ft_strcmp(dose->length_modifier, "hh")) ? (unsigned char)num : num;
	if (num == 0)
		dose->number_sign = 0;
	l = (dose->format_conversion == 'x') ?
			convert(num, 16, 0) : convert(num, 16, 1);
	if (num == '\0' && dose->precision == 0 && dose->period == 1)
		l[0] = '\0';
	count = count + ft_xxx(dose, l);
	return (count);
}
