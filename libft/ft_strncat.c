/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:36:05 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/15 13:12:14 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				longueur;

	i = 0;
	longueur = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[i + longueur] = s2[i];
		i++;
	}
	s1[i + longueur] = '\0';
	return (s1);
}
