/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:23:31 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 14:02:23 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f) (char))
{
	char	*str;
	int		i;

	if (s)
	{
		i = -1;
		if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (0);
		while (s[++i])
			str[i] = f(s[i]);
		str[i] = '\0';
		return (str);
	}
	return (0);
}
