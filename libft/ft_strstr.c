/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:54:20 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/22 15:36:58 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *find)
{
	char *tmp1;
	char *tmp2;

	if (!*find)
		return ((void *)src);
	while (*src)
	{
		if (*src == *find)
		{
			tmp1 = (void *)src + 1;
			tmp2 = (void *)find + 1;
			while (*tmp1 && *tmp2 && *tmp1 == *tmp2)
			{
				tmp1++;
				tmp2++;
			}
			if (!*tmp2)
				return ((void *)src);
		}
		src++;
	}
	return (0);
}
