/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:51:06 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/06 11:04:13 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	int			i;
	long		x;

	x = n;
	if (x < 0 || !s)
		return (NULL);
	src = s;
	i = 0;
	while (src[i] && n)
	{
		if (src[i] == c)
			return ((void *) &s[i]);
		i++;
		n--;
	}
	if (c == '\0')
		return ((void *) &s[i]);
	return (NULL);
}
