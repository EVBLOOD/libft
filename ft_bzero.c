#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char	*b;

	i = 0;
	if (n != 0)
	{
		b = s;
		while (i < (int) n)
			b[i++] = '\0';
	}
}

