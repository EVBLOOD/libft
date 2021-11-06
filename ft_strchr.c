/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:16:20 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/06 13:04:11 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if (c == '\0' && s)
		return ((char *)&s[i]);
	return (NULL);
}
