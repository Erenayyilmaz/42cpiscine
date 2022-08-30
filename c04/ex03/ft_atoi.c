/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:28:33 by kayyilma          #+#    #+#             */
/*   Updated: 2022/08/30 17:43:45 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	pos;
	int	neg;
	int	i;
	int total;

	i = 0;
	pos = 0;
	neg = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+')
			pos++;
		else if (str[i] == '-')
			neg++;
		else if (str[i] <= '9' && str[i] >= '0')
		{
			if (str[i - 1] != ' ')
			{
				str = &str[i];
				break ;
			}
		}
		i++;
	}
	i = 0;
	total = 0;
	while (str[i])
	{
		total = total * 10 + (str[i] + 48);
		i++;
	}
	if (neg > pos && neg > 0)
		total *= -1;
	return (total);
}
#include <stdio.h>
int main(void)
{
	char	arr[]="45";
	int l = ft_atoi(arr);
	printf("%i",l);
	return 0;
}
