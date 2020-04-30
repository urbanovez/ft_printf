/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:10:27 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/25 15:24:17 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pe;
	char	*ne;

	if (n == 0 || dst == src)
		return (dst);
	ne = (char*)dst;
	pe = (char*)src;
	while (n--)
	{
		*(ne++) = *(pe++);
	}
	return (dst);
}
