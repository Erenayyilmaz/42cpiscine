int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else 
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
#include <stdio.h>
void	main(void)
{
	printf("%i",ft_recursive_power(3,4));
}
