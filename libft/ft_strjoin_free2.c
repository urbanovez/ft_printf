#include "libft.h"

char	*ft_strjoin_free2(char **s1, char **s2)
{
	char	*str;
	int		i;
	int		l;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	l = ft_strlen(*s1) + ft_strlen(*s2);
	if ((str = (char *)malloc(sizeof(*str) * (l + 1))) == NULL)
		return (NULL);
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	while ((*s2)[j])
	{
		str[i + j] = (*s2)[j];
		j++;
	}
	str[i + j] = '\0';
	ft_strdel(s1);
	ft_strdel(s2);
	return (str);
}