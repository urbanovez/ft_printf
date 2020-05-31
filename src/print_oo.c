/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:19:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/23 23:36:06 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_oo(t_dose *dose, va_list arg, int count)
{
	char *l;

	l = malloc(sizeof(char) * 2);
	l = ft_strcpy(l, "%");
	ft_putstr(l);
	count = count + ft_strlen(l);
	ft_strdel(&l);
	return (count);
}

char	*ft_join_minus(char **i1, char sign)
{
	char *i;

	i = malloc(sizeof(char) * 2);
	i[0] = sign;
	i[1] = '\0';
	*i1 = ft_strjoin_free2(&i, i1);
	return (*i1);
}

char	*ft_delete_minus(char **src)
{
	char	*dst;
	int		i;
	char	*p;

	p = *src;
	dst = malloc(sizeof(char) * ft_strlen(*src));
	i = 0;
	while (**src)
	{
		(*src)++;
		dst[i] = **src;
		i++;
	}
	dst[i] = '\0';
	ft_strdel(&p);
	return (dst);
}

char	*ft_fill(int len, char s)
{
	int		j;
	char	*wid;

	wid = malloc(sizeof(char) * len + 1);
	j = 0;
	while (len-- > 0)
		wid[j++] = s;
	wid[j] = '\0';
	return (wid);
}

char	*width_join(int len, char s, char **i1, int i)
{
	char *wid;

	wid = ft_fill(len, s);
	if (i == 1)
		*i1 = ft_strjoin_free2(i1, &wid);
	else
	{
		if (*i1[0] == '+' || *i1[0] == '-' || *i1[0] == ' ')
		{
			if (s == '0')
			{
				wid = ft_join_minus(&wid, *i1[0]);
				*i1 = ft_delete_minus(i1);
				*i1 = ft_strjoin_free2(&wid, i1);
			}
			else
				*i1 = ft_strjoin_free2(&wid, i1);
		}
		else
			*i1 = ft_strjoin_free2(&wid, i1);
	}
	return (*i1);
}
