/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:46:03 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 14:07:48 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	int		i;

	if (s)
	{
		i = -1;
		if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (0);
		while (s[++i])
			str[i] = f(i, s[i]);
		str[i] = '\0';
		return (str);
	}
	return (0);
}
