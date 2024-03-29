/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:38:24 by kayyilma          #+#    #+#             */
/*   Updated: 2022/08/29 14:52:26 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ctrl_fnc(char *str, int i)
{
	if ((str[i] >= 'a' && str[i] <= 'z'))
	{
		if (str[i - 1] < 'a' || str[i - 1] > 'z')
		{
			if ((str[i - 1] < 'A' && str[i - 1] > 'Z'))
			{
				if (str[i - 1] <= '9' && str[i - 1] >= '0')
					str[i] = str[i] - ('a' - 'A');
			}				
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - ('a' - 'A');
	while (str[i] != '\0')
	{
		ctrl_fnc (str, i);
		i++;
	}
	return (1);
}