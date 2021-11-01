#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	k;
	int	c;
	int	count;
	int	count_end;
	int	tot;
	char	*p;

	i = 0;
	c = 1;
	count = i;
	count_end = i;
	while (s1[i])
		i++;
	tot = i;
	i -= 1;
	while (i >= 0)
	{
		k = 0;
		while (set[k] && c)
		{
			if (s1[i] == set[k])
			{
				count_end++;
				break;
			}
			if (!set[k + 1])
				c = 0;
			k++;
		}
		i--;
	}
	c = 1;
	i = 0;
	while (s1[i])
	{
		k = 0;
		while (set[k] && c)
		{
			if (s1[i] == set[k])
			{
				count++;
				break;
			}
			if (!set[k + 1])
				c = 0;
			k++;
		}
		i++;
	};
	p = (char *)malloc((tot - count - count_end + 1) * sizeof(char));
	if (!p)
		return (0);
	i = count;
	k = 0;
	while (s1[i] && i != tot - count_end)
	{
		p[k] = s1[i];
		i++;
		k++;
	}
	p[k] = '\0';
	return (p);
}
