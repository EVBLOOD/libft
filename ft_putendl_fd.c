#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;
	int	ln;

	nl = '\n';
	ln = ft_strlen(s);
	write(fd, s, ln);
	write(fd, &nl, 1);
}

