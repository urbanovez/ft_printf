/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(t_dose *dose, va_list arg, int count)
{
	dose->format_conversion = 'x';
	dose->number_sign = 1;
	dose->length_modifier = malloc(sizeof(char) * 3);
	dose->length_modifier = ft_strcpy(dose->length_modifier, "ll");
	count = print_xx(dose, arg, count);
	return (count);
}
