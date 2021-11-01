int	ft_atoi(const char* nptr)
{
	int	i;
	int 	s;
	int	res;

	i = 0;
	res = i;
	s = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\f' || nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		res *= 10;
		res += nptr[i] - '0';
		i++;
	}
	return (res * s);
}

