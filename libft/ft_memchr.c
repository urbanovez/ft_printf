/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:04:30 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/28 18:29:05 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ne;
	size_t	i;

	ne = (char*)s;
	i = 0;
	while (i < n && ne[i] != (char)c)
		i++;
	if (i == n)
		return (NULL);
	else
		return (&ne[i]);
}
