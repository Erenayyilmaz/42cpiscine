/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:23:54 by kayyilma          #+#    #+#             */
/*   Updated: 2022/08/29 13:27:46 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'z' && str[i] > 'a') || (str[i] < 'Z' && str[i] > 'A'))
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
