#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	char	*b;

	i = 0;
	if (n != 0)
	{
		b = s;
		while (i < (int) n)
		{
			b[i] = (char) c;
			i++;
		}
	}
	return (b);
}
