#include "libft.h"
#include <stdio.h>
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
void ft_test(unsigned int c, char *b)
{
	*b = c + *b;
}

#include <stdio.h>
int main()
{
	char *b = malloc(sizeof(char) *4);
	b[0] = '1';
	b[1] = '2';
	b[2] = '3';
	ft_striteri(b, &ft_test);
	printf("%s", b);
}