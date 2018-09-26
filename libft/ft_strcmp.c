/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:45:50 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 15:13:32 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
