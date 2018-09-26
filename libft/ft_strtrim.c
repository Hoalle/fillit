/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:08:06 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 11:44:31 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	length;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	length = end - start + 1;
	return (ft_strsub(s, start, length));
}
