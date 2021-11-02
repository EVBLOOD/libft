/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:10:11 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/02 20:10:20 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	countsrc;
	unsigned int	countdest;
	char			*temp;

	temp = dst;
	countsrc = ft_lengh(src);
	countdest = ft_lengh(dst);
	if (countdest > size)
	{
		return (countsrc + size);
	}
	size -= countdest;
	dst += countdest;
	if (size != 0)
	{
		while (*src && 0 != size - 1)
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	dst = temp;
	return (countsrc + countdest);
}
