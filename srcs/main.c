/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 17:23:04 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

/*
static void			fuckmap(int ***map)
{
	int				x;
	int				y;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
			(*map)[x][y] = 4;
	}
}
*/

int					main(void)
{
	t_xy			*max;
	int				**map;

	initscr();
	map = init_map();
	map = map;
	while (42)
	{
		clear();
		max = create_map();
		refresh();
		rush2042(map);
		max = max;
	}
	endwin();
	return (2042);
}
