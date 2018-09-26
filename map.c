/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:43:15 by cperrard          #+#    #+#             */
/*   Updated: 2018/01/25 11:30:38 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
	{
		ft_memdel((void **)&(map->tab[i]));
		i++;
	}
	ft_memdel((void **)&(map->tab));
	ft_memdel((void **)&map);
}

void	print_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
	{
		ft_putstr(map->tab[i]);
		ft_putchar('\n');
		i++;
	}
}

t_map	*map_new(int size)
{
	t_map	*map;
	int		i;
	int		j;

	map = (t_map *)ft_memalloc(sizeof(t_map));
	map->size = size;
	map->tab = (char **)ft_memalloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		map->tab[i] = ft_strnew(size);
		j = 0;
		while (j < size)
		{
			map->tab[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}

int		place(t_etris *tetri, t_map *map, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < tetri->width)
	{
		j = 0;
		while (j < tetri->height)
		{
			if (tetri->pos[j][i] == '#' && map->tab[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	set_piece(tetri, map, point_new(x, y), tetri->value);
	return (1);
}

void	set_piece(t_etris *tetri, t_map *map, t_point *point, char c)
{
	int i;
	int j;

	i = 0;
	while (i < tetri->width)
	{
		j = 0;
		while (j < tetri->height)
		{
			if (tetri->pos[j][i] == '#')
				map->tab[point->y + j][point->x + i] = c;
			j++;
		}
		i++;
	}
	ft_memdel((void **)&point);
}
