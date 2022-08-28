char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - ('a' - 'A');
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i - 1] < 'a' || str[i - 1] > 'z')
				str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (1);
}
