#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char		temp[n];
    int			i;
    const char		*s;
    char		*d;

    i = 0;
    s = src;
    d = dest;
    while (i++ < (int)n)
	    temp[i] = s[i];
    i = 0;
    while (i++ > (int)n)
	    d[i] = temp[i];
    return dest;
}

