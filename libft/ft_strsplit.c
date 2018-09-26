/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:49:02 by tharrive          #+#    #+#             */
/*   Updated: 2017/11/23 15:36:28 by tharrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(char const *s, char c)
{
	int			i;
	int			words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			if (s[i] != c)
				words++;
		}
		i++;
	}
	if (words == 0 && s[0] != c)
		words = 1;
	return (words);
}

static int		ft_letters(char const *s, int i, int c)
{
	int			letters;

	letters = 0;
	while (s[i] != c && s[i])
	{
		letters++;
		i++;
	}
	return (letters);
}

static char		*ft_write(char *tab, char const *s, int j, int c)
{
	int			n;

	n = 0;
	while (s[j] != c && s[j])
	{
		tab[n] = s[j];
		j++;
		n++;
	}
	tab[n] = '\0';
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1))))
		return (0);
	while (i < ft_words(s, c))
	{
		while (s[j] == c && s[j])
			j++;
		if (s[j])
		{
			tab[i] = (char*)malloc(sizeof(char) * (ft_letters(s, j, c) + 1));
			tab[i] = ft_write(tab[i], s, j, c);
			j = j + ft_letters(s, j, c);
		}
		i++;
	}
	tab[i] = 0;
	return (tab);
}
