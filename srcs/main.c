/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 04:17:29 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static void				failure(void)
{
	clear();
	ft_putendl("You lose !");
	exit(EXIT_SUCCESS);
}

static int				verif_map(int **map)
{
	int					x;
	int					y;

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
