/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:44:51 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/23 21:22:29 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ne;
	char	*pe;
	int		i;

	i = 0;
	ne = (char*)dst;
	pe = (char*)src;
	while (i < (int)n)
	{
		if (pe[i] == (char)c)
		{
			ne[i] = pe[i];
			return (ne + i + 1);
		}
		else
			ne[i] = pe[i];
		i++;
	}
	return (NULL);
}
