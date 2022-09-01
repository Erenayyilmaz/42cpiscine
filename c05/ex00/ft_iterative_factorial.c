int	ft_iterative_factorial(int nb)
{
	int	num2;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	num2 = 1;
	while(nb > 1)
	{
		num2 = num2 * nb;
		nb--;
	}
	return (num2);
}
