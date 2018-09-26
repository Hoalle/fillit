/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:45:50 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 15:14:33 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		i--;
	if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
