/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:54:20 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/22 15:37:30 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *src, const char *find, size_t len)
{
	char	*tmp1;
	char	*tmp2;
	size_t	tmplen;

	if (!*find)
		return ((void *)src);
	while (*src && len--)
	{
		if (*src == *find)
		{
			tmp1 = (void *)src + 1;
			tmp2 = (void *)find + 1;
			tmplen = len;
			while (tmplen-- && *tmp1 && *tmp2 && *tmp1 == *tmp2)
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
