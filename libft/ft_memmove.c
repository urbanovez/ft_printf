/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:31:56 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/25 15:29:20 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*ptr;
	char	*ptr2;

	if (len == 0 || dst == src)
		return (dst);
	ptr = (char*)dst;
	ptr2 = (char*)src;
	i = 0;
	if (ptr2 < ptr)
		while (++i <= (int)len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
