/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:43:29 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/01 18:44:37 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	void	*p;
	char	*c;

	p = malloc(nmemb * size);
	if (!p)
		return (0);
	c = p;
	i = 0;
	while (i < (int) nmemb)
	{
		c[i] = 0;
		i++;
	}
	return (p);
}
