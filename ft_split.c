#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int	count;
	int	index;
	int	b_i;
	int	k;
	char	**p;

	i = 0;
	count = 0;
	index = 0;
	b_i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
			if (!s[i])
			count -= 1;
		}
		i++;
	}
	p = (char **)malloc((count + 2) * sizeof(char **));
	i = 0;
	p[count + 1] = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		index++;
		i++;
		if (s[i] == c || s[i] == '\0')
		{
			if (index != 0)
			{
				k = 0;
				p[b_i] = (char *)malloc((index + 1) * sizeof(char *));
				if (!p)
					return (0);
				while (k < index)
				{
					p[b_i][k] = s[(i - index) + k];
					k++;
				}
				p[b_i][k] = '\0';
				b_i++;
			}
			while (s[i] == c)
			{
				i++;
			}
			index = 0;
		}
	}
	return (p);
}
