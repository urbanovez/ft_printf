/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:24:13 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/21 17:45:21 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*t;
	int		i;

	i = 0;
	if ((t = malloc(size)) == NULL)
		return (NULL);
//	while (i < (int)size)
//	{
//		t[i] = 0;
//		i++;
//	}
    ft_bzero(t, size);
	return (t);
}
