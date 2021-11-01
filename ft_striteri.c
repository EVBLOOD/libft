void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char *str;

	i = 0;
	while (s[i])
	{
		str = &s[i];
		f(i, str);
		i++;
	}
}

