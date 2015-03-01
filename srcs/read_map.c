/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:20:05 by chaueur           #+#    #+#             */
/*   Updated: 2015/03/01 03:44:02 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static void			print_case(int **map, t_xy *coord, int x, int y)
{
	int			w;
	int			h;
	int			num_x;
	int			num_y;

	w = coord->width;
	h = coord->height;
	num_x = x * w + ((w + ft_digitlen(map[x][y])) / 2);
	num_y = y * h + (h / 2);
	mvprintw(num_x, num_y, ft_itoa(map[x][y]));
}

void				read_map(int **map, t_xy *coord)
{
	int				x;
	int				y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (map[x][y] != 0)
				print_case(map, coord, x, y);
			y++;
		}
		x++;
	}
}
