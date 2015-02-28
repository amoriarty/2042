/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down_deplacement.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:54:34 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 22:09:14 by chaueur          ###   ########.fr       */
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
	if (i)
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

int					down_deplacement(int **map)
{
	int				x;
	int				y;
	int				output;

	output = 0;
	y = 0;
	while (y < 4)
	{
		x = 3;
		while (x > 0)
		{
			output = condition(x, y, map);
			x--;
		}
		y++;
	}
	return (output);
}
