/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:59:59 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/22 16:00:51 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnew(size_t size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = 0;
	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (0);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
