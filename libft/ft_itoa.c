/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:07:17 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/28 16:29:52 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_reqsize(int n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static void	ft_writenbr(char *s, unsigned int n, int size)
{
	char	*buf;

	if (n == 0)
		*s = '0';
	buf = s + size - 1;
	while (n)
	{
		*buf = (n % 10) + '0';
		n /= 10;
		buf--;
	}
}

char		*ft_itoa(int n)
{
	int				rsize;
	unsigned int	un;
	short int		sign;
	char			*res;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		un = -n;
	}
	else
		un = n;
	rsize = ft_reqsize(n) + sign;
	if (!(res = ft_strnew(rsize)))
		return (NULL);
	res[rsize] = '\0';
	if (sign == 1)
		*res = '-';
	ft_writenbr(res, un, rsize);
	return (res);
}
