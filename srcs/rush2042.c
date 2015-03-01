/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:22:25 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 13:25:21 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int						verif_map(int **map)
{
	int					x;
	int					y;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			if (map[x][y] == 0)
				return (TRUE);
		}
	}
	return (FALSE);
}

int						rush2042(int **map)
{
	int				tmp;

	tmp = getch();
	if (tmp == KEY_DOWN)
		down_move(map);
	else if (tmp == KEY_UP)
		up_move(map);
	else if (tmp == KEY_LEFT)
		left_move(map);
	else if (tmp == KEY_RIGHT)
		right_move(map);
	else if (tmp == ESC_KEY || tmp == Q_KEY)
		exit(EXIT_SUCCESS);
	else
		return (ERROR);
	return (SUCCESS);
}
