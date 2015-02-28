/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:49:07 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 12:02:09 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

t_xy				*create_map(void)
{
	int				x;
	int				y;
	t_xy			*max;

	max = new_xy();
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
