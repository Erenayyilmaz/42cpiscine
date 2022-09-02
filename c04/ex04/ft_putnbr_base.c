/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:43:36 by kayyilma          #+#    #+#             */
/*   Updated: 2022/09/02 12:47:57 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			deci_arr[i] = temp + 48;
		else
			deci_arr[i] = temp + 55;
		i++;
		num /= 16;
	}
	index2 = 0;
	while (i > index2)
	{
		write(1, &deci_arr[index2], 1);
		index2++;
	}
}

int	ft_binary(int nbr)
{
	if (nbr == 0)
		return (0);
	else
		return (nbr % 2 + 10 * ft_binary(nbr / 2));
}

int	ft_octal(int nbr)
{
	if (nbr == 0)
		return (0);
	else
		return (nbr % 8 + 10 * ft_octal(nbr / 8));
}

void	ft_putnbr(int num)
{
	int	number_to_write;

	if (num == -2147483648)
	{
		write(1, '-', 1);
		write(1, '2', 1);
		num = 147483648;
	}
	if (num < 0)
	{
		write(1, '-', 1);
		num = num * -1;
		ft_putnbr(num);
	}
	else
	{
		if (num > 9)
			ft_putnbr(num / 10);
		number_to_write = num % 10 + 48;
		write(1, &number_to_write, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	counter;

	i = 0;
	while (base[i] != '\0')
	{
		counter = 0;
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
		while (base[counter] != '\0')
		{
			if (i != counter && base[i] == base[counter])
				return ;
			counter++;
		}
	}
	if (i == 1 || i == 0)
		return ;
	if (base == "0123456789")
		ft_putnbr(nbr);
	else if (base == "01")
		ft_putnbr(ft_binary(nbr));
	else if (base == "0123456789ABCDEF")
		dec_to_hex(nbr);
	else if ("poneyvif")
		ft_putnbr(ft_octal(nbr));
}
