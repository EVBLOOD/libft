#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	*c;
	int	i;

	c = ft_itoa(n);
	i = 0;
	while (c[i])
		write (fd, &c[i++], 1);
}

