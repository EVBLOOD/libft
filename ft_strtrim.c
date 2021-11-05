/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:55:24 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/05 11:51:10 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_c(char const *s1, char const *set)
{
	int	i;
	int	c;
	int	count_end;
	int	k;

	i = ft_strlen(s1);
	c = 1;
	count_end = 0;
	while (--i >= 0 && c)
	{
		k = 0;
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				count_end++;
				break ;
			}
			if (!set[k + 1])
				c = 0;
			k++;
		}
	}
	return (count_end);
}

int	ft_cs(char const *s1, char const *set)
{
	int	c;
	int	i;
	int	k;
	int	count;

	c = 1;
	i = 0;
	count = 0;
	while (s1[i] && c)
	{
		k = 0;
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				count++;
				break ;
			}
			if (!set[k + 1])
				c = 0;
			k++;
		}
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	if (!s1 || !set || !*set)
		return (NULL);
	if (((int) ft_strlen(s1) - (ft_cs(s1, set) + ft_c(s1, set)) < 0))
	{
		p = (char *) malloc(1 * sizeof(char));
		p[0] = '\0';
		return (p);
	}
	p = malloc(((int) ft_strlen(s1) - ft_cs(s1, set) - ft_c(s1, set) + 1) * 1);
	if (!p)
		return (0);
	i = ft_cs(s1, set);
	k = 0;
	while (s1[i] && i != (int) ft_strlen(s1) - ft_c(s1, set))
	{
		p[k++] = s1[i];
		i++;
	}
	p[k] = '\0';
	return (p);
}
