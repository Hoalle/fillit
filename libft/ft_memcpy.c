/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:01:59 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/15 13:57:14 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmpdst;
	char	*tmpsrc;
	size_t	i;

	i = 0;
	tmpdst = (char *)dst;
	tmpsrc = (char *)src;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (dst);
}
