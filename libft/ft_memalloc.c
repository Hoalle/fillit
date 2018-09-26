/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:32:44 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/16 14:10:16 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if ((p = (char*)malloc(sizeof(char) * size)))
	{
		while (i < size)
		{
			p[i] = 0;
			i++;
		}
		return (p);
	}
	return (0);
}
