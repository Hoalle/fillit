/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:47:52 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 13:44:18 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_write(char *str, int n, int len)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	str[len] = '\0';
	len--;
	while (len >= i)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		temp;

	temp = n;
	len = 0;
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	if (n < 0)
		len++;
	while (temp > 9 || temp < -9)
	{
		temp = temp / 10;
		len++;
	}
	if (!(str = (char *)malloc(sizeof(*str) * (len + 2))))
		return (0);
	len++;
	str = ft_write(str, n, len);
	return (str);
}
