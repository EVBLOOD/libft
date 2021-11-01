#include "libft.h"

char*	ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	k;

	i = 0;
	while (big[i] && (int)len > i)
	{
		k = 0;
		while (big[i + k] == little[k] && i + k < (int)len)
		{
			if (little[k + 1] == '\0')
				return ((char *)&big[i]);
			k++;
		}
		i++;
	}
	return (0);
}

