/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down_deplacement.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:54:34 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 17:24:13 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static void			condition(int x, int y, int ***map)
{
	int				i;

	i = 1;
	while (map[x][y] == 0)
	{
		map[x][y] == map[x - i][y];
		map[x - i][y] == 0;
		i++;
	}
	if (map[x][y] == map[x - 1][y])
	{
		map[x][y] += map[x - 1][y];
		map[x - 1][y] = 0;
	}
}

void				down_deplacement(int ***map)
{
	int				x;
	int				y;

	y = 0;
	while (y < 4)
	{
		x = 3;
		while (x > -1)
		{
			if (x - 1 == -1)
				break;
			condition(x, y, map);
			x--;
		}
		y++;
	}
}
