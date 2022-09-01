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

int	find_total(int neg, int pos, int total, char *str)
{
	int	i;

	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		total = total * 10 + (str[i] - 48);
		i++;
	}
	if (neg > pos && neg > 0)
		total *= -1;
}

int	ft_atoi(char *str)
{
	int	pos;
	int	neg;
	int	i;
	int	total;
	int	ctr;

	i = 0;
	ctr = 0;
	pos = 0;
	neg = 0;
	while (str[i] != '\0' && ctr != 1)
	{
		if (str[i] == '+')
			pos++;
		if (str[i] == '-')
			neg++;
		else if (str[i] <= '9' && str[i] >= '0')
		{
			ctr = 1;
			str = &str[i];
		}
		i++;
	}
	return (find_total(neg, pos, 0, str));
}
