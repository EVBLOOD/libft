/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:18:45 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/02 18:21:13 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhite(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static void	ft_word(int i, int count, char *p, char *s)
{
	int	k;

	k = 0;
	while (k < count)
	{
		p[k] = s[(i - count) + k];
		k++;
	}
	p[k] = '\0';
}

static char	**ft_spf(int i, char **p, char *s, char c)
{
	int	b_i;
	int	count;

	b_i = 0;
	count = 0;
	while (s[i])
	{
		count++;
		i++;
		if (s[i] == c || s[i] == '\0')
		{
			if (count != 0)
			{
				p[b_i] = (char *)malloc((count + 1) * sizeof(char *));
				if (!p)
					return (0);
				ft_word(i, count, p[b_i], s);
				b_i++;
			}
			i += ft_iswhite(&s[i], c);
			count = 0;
		}
	}
	return (p);
}

static char	**ft_exep(void)
{
	char	**p;

	p = malloc(1 * sizeof(char **));
	p[0] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**p;

	i = ft_iswhite(s, c);
	count = 0;
	if (ft_strlen(s) == (size_t)i)
		return (ft_exep());
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			i += ft_iswhite(&s[i], c);
			if (!s[i])
				count -= 1;
		}
		i++;
	}
	p = (char **)malloc((count + 2) * sizeof(char **));
	i = ft_iswhite(s, c);
	p[count + 1] = NULL;
	p = ft_spf(i, p, (char *)s, c);
	return (p);
}
