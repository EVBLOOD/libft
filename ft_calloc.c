#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	i;
	void	*p;
	char	*c;

	p = malloc(nmemb * size);
	if (!p)
		return 0;
	c = p;
	i = 0;
	while (i < (int)nmemb)
	{
		c[i] = 0;
		i++;
	}
	return (p);
}
