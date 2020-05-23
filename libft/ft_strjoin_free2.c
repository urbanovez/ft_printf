#include "libft.h"

char	*ft_strjoin_free2(char **s1, char **s2)
{
	char	*str;
	int		i;
	int		j;
	char	*p;
	char	*p1;

	i = 0;
	j = 0;
	p = *s1;
	p1 = *s2;
	if (!s1 || !s2)
		return (NULL);
	if ((str = (char *)malloc(sizeof(*str) * (ft_strlen(*s1) + ft_strlen(*s2) + 1))) == NULL)
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
	ft_strdel(&p);
	//ft_strdel(&p1);
	return (str);
}