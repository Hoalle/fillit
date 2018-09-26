/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:46:45 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/22 15:52:55 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		signe;
	int		nbr;

	signe = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		signe = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10;
		nbr = nbr + *str - '0';
		str++;
	}
	return (nbr * signe);
}
