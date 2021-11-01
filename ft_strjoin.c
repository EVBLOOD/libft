#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	k;
	int	count;
	char	*p;

	i = 0;
	k = 0;
	while (s1[i++]);
	while (s2[k++]);
	count = i + k + 1;
	p = (char *)malloc(count * sizeof(char));
	if (!p)
		return ((char *)0);
	i = 0;
	k = i;
	while (s1[k])
	{
		p[i] = s1[k];
		i++;
		k++;
	}
	k = 0;
	while (s2[k])
	{
		p[i] = s2[k];
		i++;
		k++;
	}
	p[i] = '\0';
	return (p);
}
