int	ft_str_is_alpha(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'z' && str[i] > 'A')
		{
			continue ;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
