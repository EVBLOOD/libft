#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	k;
	unsigned int	len_s;
	unsigned int	len_d;

	i = 0;
	k = i;
	len_s = (unsigned int)ft_strlen(src);
	len_d = (unsigned int)ft_strlen(dst);
	if (size - 1 < len_d)
		return (len_s + size);
	else
	{
		size -= len_d;
		while (dst[i])
			i++;
		while (src[k] && (size - 1 > (unsigned int)k))
		{
			dst[i] = src[k];
			i++;
			k++;
		}
		dst[i] = '\0';
		src -= k;
		return ((len_d - (size - 1)) + len_s);
	}
}

