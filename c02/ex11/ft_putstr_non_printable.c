/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:26:58 by kayyilma          #+#    #+#             */
/*   Updated: 2022/08/29 18:21:54 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	find_arr_len(char *arr)
{
	int	index;

	index = 0;
	while (arr[index] != '\0')
	{
		index++;
	}
	return (index);
}

void	print_arr(int i, int index2, char *deci_arr)
{
	while (i > index2)
	{
		ft_putchar(deci_arr[index2]);
	}
}

void	dec_to_hex(int num)
{
	int		i;
	int		temp;
	int		index2;
	char	deci_arr[20];

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			deci_arr[i] = temp + 48;
			i++;
		}
		else
		{
			deci_arr[i] = temp + 55;
			i++;
		}
		num /= 16;
	}
	index2 = 0;
	print_arr(i, index2, deci_arr);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (index <= find_arr_len(str))
	{
		if (str[index] <= 32)
		{
			dec_to_hex(str[index]);
		}
		else
		{
			ft_putchar(str[index]);
		}
	}
}