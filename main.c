/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:50:54 by jhertzog          #+#    #+#             */
/*   Updated: 2018/01/25 11:29:22 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_verif(char *string)
{
	int		count;
	char	*str;
	char	str_tmp;
	int		tmp;

	count = 0;
	if ((tmp = open(string, O_RDONLY)) == -1)
		return (1);
	while (read(tmp, &str_tmp, 1))
		count++;
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (0);
	tmp = open(string, O_RDONLY);
	count = 0;
	while (read(tmp, &str_tmp, 1))
	{
		str[count] = str_tmp;
		count++;
	}
	str[count] = '\0';
	close(tmp);
	if (str[count - 1] == '\n' && str[count - 2] == '\n')
		return (1);
	return (0);
}

int				main(int argc, char **argv)
{
	t_list	*list;
	t_map	*map;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	if (ft_verif(argv[1]))
	{
		ft_putstr("error\n");
		return (0);
	}
	if ((list = read_tetri(open(argv[1], O_RDONLY))) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	map = solve(list);
	print_map(map);
	free_map(map);
	free_list(list);
	return (0);
}
