/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:43:29 by sakllam           #+#    #+#             */
/*   Updated: 2021/11/03 20:15:40 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

int main()
{
	char *str = ft_calloc(4,1);
	str = "saad";
   printf("==> |%s|",str);
   printf("\n**************************************\n");
	char *str1 = calloc(4,1);
	str1 = "saad";
   printf("==> |%s|",str);
}
