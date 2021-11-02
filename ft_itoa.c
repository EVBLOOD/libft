/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:49:12 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/01 18:50:49 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_counting(int n)
{
	int	i;

	i = 0;
	if (n > 9)
		i = ft_counting(n / 10);
	i++;
	return (i);
}

static void	ft_writing(char *p, int n, int *i)
{
	if (n <= 9)
	{
		p[*i] = '0' + n;
		(*i)++;
	}
	else
	{
		ft_writing(p, n / 10, i);
		ft_writing(p, n % 10, i);
	}
}

char	*ft_itoa(int n)
{
	char	*p;
	int		count;
	int		index;

	count = ft_counting(n);
	index = 0;
	p = (char *) malloc((count + 1) * sizeof(char));
	ft_writing(p, n, &index);
	p[index] = '\0';
	return (p);
}
