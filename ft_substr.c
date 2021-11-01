#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char	*p;

	/*if ((int)len < 0 || (int)start < 0)
		return (0);
		ma3rft wach tkon or ghi tanjtahd*/
	i = 0;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < (int)len && s[i + start - 1])
	{
		p[i] = s[i + start - 1];
		i++;
	}
	p[i] = '\0';
	return (p);
}
