#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*arr;
	int	len;

	len = ft_strlen(src);
	arr = (char *)malloc(len);
	i = 0;
	while (src[i] != '\0')
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
