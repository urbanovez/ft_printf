/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert(uintmax_t num, int base, int a)
{
	char	*representation;
	char	*buffer;
	char	*ptr;
	char	*l;

	representation = malloc(sizeof(char) * 17);
	if (a == 1)
		representation = ft_strcpy(representation, "0123456789ABCDEF");
	else
		representation = ft_strcpy(representation, "0123456789abcdef");
	buffer = malloc(sizeof(char) * 50);
	ptr = &buffer[49];
	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = representation[num % base];
		num /= base;
	}
	l = malloc(sizeof(char) * ft_strlen(ptr) + 1);
	l = ft_strcpy(l, ptr);
	ft_strdel(&representation);
	ft_strdel(&buffer);
	return (l);
}

char	*ft_precision_join(int i, char **num)
{
	char	*f;
	char	*f1;
	int		j;

	j = 0;
	if (i < 0)
		i = 0;
	f1 = malloc(sizeof(char) * i + 1);
	while (i-- > 0)
		f1[j++] = '0';
	f1[j] = '\0';
	f = ft_strjoin_free2(&f1, num);
	return (f);
}

int		print_o(t_dose *dose, va_list arg, int count)
{
	uintmax_t	num;
	char		*l;

	num = va_arg(arg, uintmax_t);
	num = (!ft_strcmp(dose->length_modifier, "l")) ? (long)num : num;
	num = (!ft_strcmp(dose->length_modifier, "ll")) ? (long long)num : num;
	num = (ft_strlen(dose->length_modifier) == 0) ? (unsigned int)num : num;
	num = (!ft_strcmp(dose->length_modifier, "h")) ? (unsigned short)num : num;
	num = (!ft_strcmp(dose->length_modifier, "hh")) ? (unsigned char)num : num;
	l = convert(num, 8, 0);
	if (num == '\0' && dose->precision == 0 && dose->period == 1)
		l[0] = '\0';
	l = ft_join_sign(dose, &l);
	if (dose->precision == 0 && dose->period == 0)
		dose->precision = 1;
	l = ft_precision_join(dose->precision - ft_strlen(l), &l);
	l = ft_join_width(dose, &l);
	ft_putstr(l);
	count = count + ft_strlen(l);
	ft_strdel(&l);
	return (count);
}
