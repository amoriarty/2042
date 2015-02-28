/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down_deplacement.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:54:34 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 23:58:40 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static int			condition(int x, int y, int **map)
{
	int				i;

	i = 0;
	while (x > 0 && map[x][y] == 0)
	{
		i++;
		x--;
	}
	//si on a de l'espace entre x et i
	if (map[x][y] != 0 && i)
	{
		if (x + i + 1 <= 3 && map[x + i + 1][y] == map [x][y])
			map[x + i + 1][y] += map[x][y];
		else
			map[x + i][y] = map[x][y];
		map[x][y] = 0;
		return (1);
	}
	else if (x - 1 > 0 && map[x][y] == map[x - 1][y])
	{
		map[x][y] += map[x - 1][y];
		map[x - 1][y] = 0;
		return (1);
	}
	return (0);
}

void				down_deplacement(int **map)
{
	int				x;
	int				y;
	int				output;

	y = 0;
	output = 0;
	while (y < 4)
	{
		x = 3;
		while (x >= 0)
		{
			if (condition(x, y, map))
				output = 1;
			x--;
		}
		y++;
	}
	if (output)
		create_case(map);
}
