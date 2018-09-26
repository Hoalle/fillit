/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:22:06 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/21 16:13:16 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		k = str[i];
		str[i] = str[j];
		str[j] = k;
		i++;
		j--;
	}
	return (str);
}
