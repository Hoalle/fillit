/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:57:59 by cperrard          #+#    #+#             */
/*   Updated: 2018/01/25 11:31:18 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Backtracking
*/

int		solve_map(t_map *map, t_list *list)
{
	int			x;
	int			y;
	t_etris		*tetri;

	if (list == NULL)
		return (1);
	y = 0;
	tetri = (t_etris *)(list->content);
	while (y < map->size - tetri->height + 1)
	{
		x = 0;
		while (x < map->size - tetri->width + 1)
		{
			if (place(tetri, map, x, y))
			{
				if (solve_map(map, list->next))
					return (1);
				else
					set_piece(tetri, map, point_new(x, y), '.');
			}
			x++;
		}
		y++;
	}
	return (0);
}

/*
** calcule la taille au carre minimal
*/

int		calc_size(int n)
{
	int size;

	size = 2;
	while (size * size < n)
		size++;
	return (size);
}

/*
** Solve la map en partant de la plus petite taille
*/

t_map	*solve(t_list *list)
{
	t_map	*map;
	int		size;

	size = calc_size(ft_lstcount(list) * 4);
	map = map_new(size);
	while (!solve_map(map, list))
	{
		size++;
		free_map(map);
		map = map_new(size);
	}
	return (map);
}
