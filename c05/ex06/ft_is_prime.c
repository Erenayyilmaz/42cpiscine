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
#include <stdio.h>
void	main(void)
{
	printf("%i",ft_is_prime(7));
}
