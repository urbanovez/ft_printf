//
// Created by hamin on 4/22/2020.
//

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


# include <stdarg.h>
# include <string.h>
# include <stdbool.h>
# include "libft/libft.h"
# include <locale.h>
# include <wchar.h>
# include <stdio.h>


typedef struct	s_dose
{
    bool		number_sign;
    bool		zero;//0
    bool		minus;//-
    bool		plus;//+
    bool		space;//' '
    bool		period;
    int			width;
    int			precision;
    char		*length_modifier;//length_modifier
    char		format_conversion;
}				t_dose;

//flags  width! precision!
int	 ft_printf(const char *format, ...);			//Our printf function
char* convert(unsigned int, int); 		//Convert integer number into octal, hex, etc.

void iniliaze_t_dose(t_dose		*dose);
bool type_field(char c);
const char *adding_length_modifier(t_dose *dose, const char *format);
const char *adding_precision(t_dose *dose, const char *format);
const char *adding_width(t_dose *dose, const char *format);
const char *adding_flags(t_dose *dose, const char *format);
const char *adding_t_dose(const char *format, t_dose *dose);
const char *ft_argument(const char *format, va_list arg);

#endif
