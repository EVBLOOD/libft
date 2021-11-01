#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	int		i;

	src = s;
	i = 0;
	while (src[i++] && n--)
		if (src[i] == c)
			return ((char *)&src[i]);
	return (0);
}
