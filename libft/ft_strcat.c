/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:48:46 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/15 13:11:32 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int longueur;

	i = 0;
	longueur = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[i + longueur] = s2[i];
		i++;
	}
	s1[i + longueur] = '\0';
	return (s1);
}
