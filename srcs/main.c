/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 17:24:14 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static void				success(void)
{
	clear();
	mvprintw(0, 0, "YOU WIN !!!");
	mvprintw(1, 0, "Press enter to keep playing");
	if (getch() == 10)
		return ;
	exit(EXIT_SUCCESS);
}

static void				failure(int **map)
{
	int					i;

	i = 0;
	endwin();
	ft_putendl("You lose !");
	while (i < 4)
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
				success();
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

static void				facto(int **map, t_xy *coord)
{
	read_map(map, coord);
	rush2042(map);
	if (verif_map(map) == FALSE)
		failure(map);
	if (winner(map) == TRUE)
		success();
	refresh();
}

int						main(void)
{
	t_xy				*coord;
	t_env				env;
	int					**map;

	initscr();
	env.grid_size = 4;
	create_menu(&env);
	check_win_value(0);
	curs_set(FALSE);
	map = init_map();
	while (42)
	{
		clear();
		if ((coord = create_map(&env)))
			facto(map, coord);
		else
		{
			error("2042", "Window size too small");
			break ;
		}
	}
	return (2042);
}
