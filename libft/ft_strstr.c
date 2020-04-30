/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:40:30 by ttawna            #+#    #+#             */
/*   Updated: 2019/09/25 18:31:28 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int pos;

	pos = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[pos])
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (haystack[i] && haystack[pos + i] == needle[i] && needle[i])
				i++;
		}
		if (needle[i] == '\0')
			return ((char*)&haystack[pos]);
		pos++;
	}
	return (NULL);
}
