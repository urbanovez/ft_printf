/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:56:17 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/20 14:16:41 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	const unsigned char	*ne;
	const unsigned char	*pe;

	if (s1 == s2 || n == 0)
		return (0);
	ne = (const unsigned char *)s1;
	pe = (const unsigned char *)s2;
	i = 0;
	while (i < (int)n)
	{
		if (ne[i] != pe[i])
			return (ne[i] - pe[i]);
		i++;
	}
	return (0);
}
