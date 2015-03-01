/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right_deplacement.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:35:31 by chaueur           #+#    #+#             */
/*   Updated: 2015/03/01 02:02:39 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static int			condition(int x, int y, int **map)
{
	int				i;

	i = 0;
	while (y > 0 && map[x][y] == 0)
	{
		i++;
		y--;
	}
	//si on a de l'espace entre x et i
	if (map[x][y] != 0 && i)
	{
		if (y + i + 1 <= 3 && map[x][y + i + 1] == map [x][y])
			map[x][y + i + 1] += map[x][y];
		else
			map[x][y + i] = map[x][y];
		map[x][y] = 0;
		return (TRUE);
	}
	else if (y - 1 >= 0 && map[x][y] == map[x][y - 1])
	{
		map[x][y] += map[x][y - 1];
		map[x][y - 1] = 0;
		return (TRUE);
	}
	return (FALSE);
}

void				right_deplacement(int **map)
{
	int				x;
	int				y;
	int				output;

	y = 3;
	output = 0;
	while (y >= 0)
	{
		x = 0;
		while (x < 4)
		{
			if (condition(x, y, map))
				output = 1;
			x++;
		}
		y--;
	}
	if (output)
		create_case(map);
}