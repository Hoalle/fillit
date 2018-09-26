/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:28:46 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/16 15:32:53 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	i = 0;
	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	if (dst > src)
	{
		while (n--)
			tmpdst[n] = tmpsrc[n];
	}
	else if (dst < src)
	{
		while (i < n)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (tmpdst);
}
