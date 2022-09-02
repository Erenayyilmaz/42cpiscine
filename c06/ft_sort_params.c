#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		write(1, str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s1[i] - s2[i] > 0)
	{
		return (1);
	}
	else if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (-1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	temp;
	int	counter;

	i = 1;
	while (i <= argc)
	{
		counter = 1;
		while (counter <= argc -1)
		{
			if (ft_strcmp(argv[counter], argv[counter - 1]) == -1)
			{
				temp = argv[counter];
				argv[counter] = argv[counter - 1];
				argv[counter - 1] = temp;
			}
			counter++;
		}
		i++;
	}
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
