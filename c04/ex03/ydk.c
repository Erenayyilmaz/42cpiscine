#include <stdio.h>
int	ft_atoi(char *str)
{
	int	pos;
	int	neg;
	int	i;
	int total;
    int ctr;

	i = 0;
    ctr = 0;
	pos = 0;
	neg = 0;
	while (str[i] != '\0' && ctr != 1)
	{
        printf("\nchar %c\n",str[i]);
		if(str[i] == '+')
            pos++;
        if(str[i] == '-')
            neg++;
        else if(str[i] <= '9' && str[i] >= '0')
        {
            printf("\ngiridi");
            ctr = 1;
            str = &str[i];
            printf("\nstr ctrl:%s\n",str);
        }
        i++;
	}
	i = 0;
	total = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		total = total * 10 + (str[i] - 48);
		i++;
	}
	if (neg > pos && neg > 0)
		total *= -1;
	return (total);
}
int main(void)
{
	char	arr[]="   --- +--+ 1 234ab567";
	int l = ft_atoi(arr);
	printf("%i",l);
	return 0;
}
