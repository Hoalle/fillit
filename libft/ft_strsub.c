/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:56:59 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 14:16:49 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;

	if (s)
	{
		str = malloc(sizeof(char) * (len + 1));
		if (str)
		{
			while (start--)
				s++;
			ft_strncpy(str, s, len);
			str[len] = '\0';
		}
		return (str);
	}
	return (0);
}
