/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:48:13 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/02 14:56:27 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	i = 0;
	a = dst;
	b = (char *) src;
	if ((!a || !b))
		return (NULL);
	if (a > b)
	{
		while (n-- > 0)
			a[n] = b[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
