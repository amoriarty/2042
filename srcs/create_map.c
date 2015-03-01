/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:49:07 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 17:24:52 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

t_xy				*create_map(t_env *env)
{
	int				x;
	int				y;
	t_xy			*coord;

	coord = new_xy(env);
	if ((coord->x_max < 20) || (coord->y_max < 10))
		return (0);
	x = -1;
	while (++x < coord->x_max)
	{
		y = -1;
		while (++y < coord->y_max)
		{
			if ((x == coord->width)
					|| (x == coord->width * 2)
					|| (x == coord->width * 3))
				mvaddch(x, y, '-');
			if ((y == coord->height)
					|| (y == coord->height * 2)
					|| (y == coord->height * 3))
				mvaddch(x, y, '|');
		}
	}
	return (coord);
}
