#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char	*p;

	i = 0;
	if (!s)
		return (NULL);
	p = (char *) malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < (int) len && s[i + start] && !(start >= ft_strlen(s)))
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}