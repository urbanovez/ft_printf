/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include <locale.h>
# include <inttypes.h>
# include <wchar.h>
# include <stdio.h>

typedef struct	s_dose
{
	bool		number_sign;
	bool		zero;
	bool		minus;
	bool		plus;
	bool		space;
	bool		period;
	int			width;
	int			precision;
	char		*length_modifier;
	char		format_conversion;
}				t_dose;

int				ft_printf(const char *format, ...);
void			iniliaze_t_dose(t_dose		*dose);
bool			type_field(char c);
const char		*adding_length_modifier(t_dose *dose, const char **format);
const char		*adding_precision(t_dose *dose, const char **format);
const char		*adding_width(t_dose *dose, const char **format);
const char		*adding_flags(t_dose *dose, const char **format);
const char		*adding_t_dose(const char **format, t_dose *dose);
int				ft_argument(const char **format, int count, va_list arg);
int				print_s(t_dose	*dose, va_list arg, int count);
int				print_c(t_dose	*dose, va_list arg, int count);
int				print_f(t_dose	*dose, va_list arg, int count);
int				print_di(t_dose	*dose, va_list arg, int count);
int				print_u(t_dose	*dose, va_list arg, int count);
int				print_o(t_dose	*dose, va_list arg, int count);
int				print_p(t_dose	*dose, va_list arg, int count);
int				print_oo(t_dose	*dose, va_list arg, int count);
int				power(int x, int y);
char			*convert(uintmax_t num, int base, int a);
char			*ft_join_width(t_dose *dose, char **i1);
char			*width_join(int len, char s, char **i1, int i);
char			*ft_join_sign(t_dose	*dose, char **i1);
int				print_xx(t_dose	*dose, va_list arg, int count);
char			*ft_precision_join(int i, char **num);
char			*ft_intmax_toa(intmax_t num);
char			*ft_join_pr(int i, char **i1);
char			*ft_join_minus(char **i1, char sign);
int				ft_putchar_and_count(char num, int count);
char			*ft_delete_minus(char **src);

#endif
