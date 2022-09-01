int	ft_strlen(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return(dest);
}
