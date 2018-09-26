/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:20:15 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/21 16:12:06 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	minus(char y)
{
	if (y >= 'a' && y <= 'z')
		return (1);
	return (0);
}

static int	majus(char x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	return (0);
}

static int	alphanume(char z)
{
	if (z >= 'a' && z <= 'z')
		return (1);
	if (z >= 'A' && z <= 'Z')
		return (1);
	if (z >= '0' && z <= '9')
		return (1);
	return (0);
}

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (minus(str[i]) || majus(str[i]))
		{
			if (alphanume(str[i - 1]))
			{
				if (majus(str[i]))
					str[i] += 32;
			}
			else if (!alphanume(str[i - 1]) || str[i - 1] == '-' ||
					str[i - 1] == '+')
			{
				if (minus(str[i]))
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
