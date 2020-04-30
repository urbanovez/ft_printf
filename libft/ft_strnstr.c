/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:19:42 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/26 14:16:46 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int pos;

	pos = 0;
	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[pos] != '\0' && pos < (int)len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (haystack[pos + i] == needle[i] && needle[i] != '\0' && \
					(pos + i) < (int)len)
				i++;
		}
		if (needle[i] == '\0')
			return ((char*)&haystack[pos]);
		pos++;
	}
	return (NULL);
}
