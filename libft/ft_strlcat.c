/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:42:16 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/22 15:57:30 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		size_dest;
	size_t		size_src;

	j = 0;
	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	i = size_dest;
	if (size <= 0)
		return (size_src);
	if (size > size_dest)
	{
		while (src[j] && i < (size - 1))
		{
			dst[i] = (char)src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (size_dest + size_src);
	}
	else
		return (size + size_src);
}
