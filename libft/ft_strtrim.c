/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 21:48:00 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/28 16:27:54 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *str)
{
	int finish;

	finish = 0;
	while (str[finish] && (str[finish] == ' ' || str[finish] == '\n' \
		|| str[finish] == '\t'))
		finish++;
	return (finish);
}

static int	ft_finish(char const *str)
{
	int	finish;

	finish = ft_strlen(str);
	finish--;
	while (str[finish] && (str[finish] == ' ' || str[finish] == '\n' \
		|| str[finish] == '\t'))
		finish--;
	return (finish);
}

char		*ft_strtrim(char const *str)
{
	char	*s;
	int		j;
	int		start;
	int		finish;

	if (!str)
		return (0);
	start = ft_start(str);
	finish = ft_finish(str);
	if (finish <= start)
	{
		s = malloc(sizeof(*s) * (1));
		*s = '\0';
		return (s);
	}
	s = malloc(sizeof(*s) * (finish - start + 2));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (start <= finish)
	{
		s[j++] = str[start++];
	}
	s[j] = '\0';
	return (s);
}
