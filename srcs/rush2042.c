/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:22:25 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 03:10:51 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int					verif_map(int **map)
{
	int				x;
	int				y;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			check_win_value(map[x][y]);
			if (x + 1 < 4 && map[x][y] == map[x + 1][y])
				return (TRUE);
			else if (y + 1 < 4 && map[x][y] == map[x][y + 1])
			  	return (TRUE);
			else if (map[x][y] == 0)
				return (TRUE);
		}
	}
	return (FALSE);
}

int					rush2042(int **map)
{
	int				tmp;

	tmp = getch();
	/*if (verif_map(map) == FALSE)
		failure();*/
	if (tmp == DOWN_KEY)
		down_deplacement(map);
	else if (tmp == UP_KEY)
		up_deplacement(map);
	else if (tmp == LEFT_KEY)
		left_deplacement(map);
	else if (tmp == RIGHT_KEY)
		right_deplacement(map);
	else
		return (ERROR);
	return (SUCCESS);
}
