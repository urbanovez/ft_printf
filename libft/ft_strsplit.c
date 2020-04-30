/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 23:30:31 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/28 16:29:00 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sstrlen(char const *s, char delim)
{
	char	*b;

	b = (char*)s;
	while (*b && (*b != delim))
		b++;
	return ((size_t)(b - s));
}

static void		*ft_deldel(void **buf)
{
	while (*buf)
		ft_memdel(*buf++);
	return (NULL);
}

static size_t	ft_countwords(char const *s, char delim)
{
	short int	isword;
	size_t		words;

	words = 0;
	isword = 0;
	while (*s)
	{
		if ((*s != delim) && (isword == 0))
		{
			isword = 1;
			words++;
		}
		if (*s == delim)
			isword = 0;
		s++;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**res;
	char		**buf;
	size_t		words;
	short int	isword;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	if (!(res = (char**)malloc(sizeof(*res) * (words + 1))))
		return (NULL);
	res[words] = NULL;
	buf = res;
	isword = 0;
	while (*s)
	{
		if ((*s != c) && (isword == 0))
		{
			isword = 1;
			if (!(*res++ = ft_strsub(s, 0, ft_sstrlen(s, c))))
				return (ft_deldel((void**)buf));
		}
		if (*s++ == c)
			isword = 0;
	}
	return (buf);
}
