/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:49:07 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 00:48:31 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

t_xy				*create_map(void)
{
	int				x;
	int				y;
	t_xy			*max;

	max = new_xy();
	if ((max->x_max < 13) || (max->y_max < 33))
		return (0);
	while (x < max->x_max)
	{
		y = 0;
		while (y < max->y_max)
		{
			if ((x == max->x_per_four)
					|| (x == max->x_per_four * 2)
					|| (x == max->x_per_four * 3))
				mvaddch(x, y, '-');
			if ((y == max->y_per_four)
					|| (y == max->y_per_four * 2)
					|| (y == max->y_per_four * 3))
				mvaddch(x, y, '|');
			y++;
		}
		x++;
	}
	return (max);
}
