/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:10:11 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/06 13:04:11 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		countsrc;
	int		countdest;
	char	*temp;

	temp = dst;
	countsrc = (int) ft_strlen(src);
	countdest = (int) ft_strlen(dst);
	if (countdest > (int) size || !src || !dst)
	{
		return (countsrc + (int) size);
	}
	size -= countdest;
	dst += countdest;
	if ((int) size - 1 >= 0)
	{
		while (*src && 0 != (int) size - 1)
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	dst = temp;
	return (countsrc + countdest);
}
