/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:13:11 by kayyilma          #+#    #+#             */
/*   Updated: 2022/08/29 20:17:29 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]) && i <= n)
	{
		i++;
	}
	if (s1[i] - s2[i] > 0)
	{
		return (1);
	}
	else if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s2[i] - s1[i] > 0)
	{
		return (-1);
	}
	return (0);
}