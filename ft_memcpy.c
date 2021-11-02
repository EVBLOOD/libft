/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:52:54 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/01 18:54:27 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*x;
	const char	*y;

	i = 0;
	if (n != 0)
	{
		x = dest;
		y = src;
		while (i < (int) n)
		{
			x[i] = y[i];
			i++;
		}
	}
	return (dest);
}
