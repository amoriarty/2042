/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 03:40:03 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int					main(void)
{
	t_xy			*coord;
	int				**map;

	check_win_value(0);
	initscr();
	curs_set(FALSE);
	map = init_map();
	while (42)
	{
		clear();
		if ((coord = create_map()))
		{
			read_map(map, coord);
			rush2042(map);
			if (verif_map(map) == FALSE)
				failure();
			refresh();
		}
		else
		{
			error("2042", "Window size too small");
			break ;
		}
	}
	return (2042);
}
