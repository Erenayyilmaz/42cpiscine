int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ctr;

	ctr = 1;
	i = 0;
	while (i < power)
	{
		ctr *= nb;
		i++;
	}
	return (ctr);
}
#include <stdio.h>
void	main(void)
{
	printf("%i",ft_iterative_power(3,4));
}
