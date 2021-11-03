/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:21:07 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/03 14:21:58 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*v;
	unsigned int	i;
	int				ln;

	i = 0;
	ln = ft_strlen(s) + 1;
	v = (char *) malloc(sizeof(char) * ln);
	if (!v)
		return (NULL);
	while (s[i])
	{
		v[i] = f(i, s[i]);
		i++;
	}
	v[i] = '\0';
	return (v);
}
