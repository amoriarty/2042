/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 17:34:48 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int					main(void)
{
	t_xy			*max;
	int				**map;

	initscr();
	curs_set(FALSE);
	map = init_map();
	map = map;
	while (42)
	{
		clear();
		max = create_map();
		read_map(map, max);
		refresh();
		rush2042(&map);
		max = max;
	}
	endwin();
	return (2042);
}
