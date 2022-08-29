int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '9' && str[i] > '0')
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