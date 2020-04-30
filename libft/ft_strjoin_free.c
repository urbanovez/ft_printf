/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 20:21:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/08 23:19:48 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char **s1, char const *s2)
{
	char	*str;
	int		i;
	int		l;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	l = ft_strlen(*s1) + ft_strlen(s2);
	if ((str = (char *)malloc(sizeof(*str) * (l + 1))) == NULL)
		return (NULL);
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	ft_strdel(s1);
	return (str);
}
