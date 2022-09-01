int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
