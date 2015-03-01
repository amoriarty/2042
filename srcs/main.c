/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 04:39:18 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static void				success(int **map)
{
	ft_putendl("You win !")
}

static void				failure(int **map)
{
	int					i;

	i = 0;
	clear();
	ft_putendl("You lose !");
	while (i < 4);
	{
		free(map[i]);
		i++;
	}
	free(map);
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
			if (check_win_value(map[x][y]))
				success(map);
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
				failure(map);
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
