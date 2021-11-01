#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int	ln;

	ln = ft_strlen(s);
	write(fd, s, ln);
}
