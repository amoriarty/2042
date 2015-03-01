/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_deplacement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:00:46 by chaueur           #+#    #+#             */
/*   Updated: 2015/03/01 02:11:40 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static int			condition(int x, int y, int **map)
{
	int				i;

	i = 0;
	while (x < 3 && map[x][y] == 0)
	{
		i++;
		x++;
	}
	//si on a de l'espace entre x et i
	if (map[x][y] != 0 && i)
	{
		if (x - i - 1 >= 0 && map[x - i - 1][y] == map [x][y])
			map[x - i - 1][y] += map[x][y];
		else
			map[x - i][y] = map[x][y];
		map[x][y] = 0;
		return (TRUE);
	}
	else if (x + 1 <= 3 && map[x][y] == map[x + 1][y])
	{
		map[x][y] += map[x + 1][y];
		map[x + 1][y] = 0;
		return (TRUE);
	}
	return (FALSE);
}

void				up_deplacement(int **map)
{
	int				x;
	int				y;
	int				output;

	y = 0;
	output = 0;
	while (y < 4)
	{
		x = 0;
		while (x <= 3)
		{
			if (condition(x, y, map))
				output = 1;
			x++;
		}
		y++;
	}
	if (output)
		create_case(map);
}
