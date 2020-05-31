/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*adding_flags(t_dose *dose, const char **format_point)
{
	while ((**format_point == '#') ||
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
	return (*format_point);
}

const char	*adding_t_dose(const char **format_point, t_dose *dose)
{
	iniliaze_t_dose(dose);
	*format_point = adding_flags(dose, format_point);
	*format_point = adding_width(dose, format_point);
	*format_point = adding_precision(dose, format_point);
	*format_point = adding_length_modifier(dose, format_point);
	dose->format_conversion = **format_point;
	if (dose->format_conversion == 'O')
		dose->format_conversion = 'o';
	if (dose->minus == 1)
		dose->zero = 0;
	if (dose->plus == 1)
		dose->space = 0;
	(*format_point)++;
	return (*format_point);
}
