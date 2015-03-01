/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 03:31:19 by chaueur           #+#    #+#             */
/*   Updated: 2015/03/01 03:40:43 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static int			condition(int x, int y, int **map)
{
	int				i;

	i = 0;
	while (y < 3 && map[x][y] == 0)
	{
		i++;
		y++;
	}
	if (map[x][y] != 0 && i)
	{
		if (y - i - 1 >= 0 && map[x][y - i - 1] == map[x][y])
			map[x][y - i - 1] += map[x][y];
		else
			map[x][y - i] = map[x][y];
		map[x][y] = 0;
		return (TRUE);
	}
	else if (y + 1 <= 3 && map[x][y] == map[x][y + 1])
	{
		map[x][y] += map[x][y + 1];
		map[x][y + 1] = 0;
		return (TRUE);
	}
	return (FALSE);
}

void				left_move(int **map)
{
	int				x;
	int				y;
	int				output;

	y = 0;
	output = 0;
	while (y <= 3)
	{
		x = 0;
		while (x < 4)
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
