/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:22:25 by alegent           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/02/28 19:30:03 by chaueur          ###   ########.fr       */
=======
/*   Updated: 2015/03/01 04:17:19 by chaueur          ###   ########.fr       */
>>>>>>> 51533f18406ecff37e9777d0ebe89ab4a769c808
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int						rush2042(int **map)
{
	int					tmp;

<<<<<<< HEAD
	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			if ((*map)[x][y] == 0)
				return (TRUE);
		}
	}
	return (FALSE);
}

int					rush2042(int ***map)
{
	int				tmp;

	if (verif_map(map) == FALSE)
		failure();
	tmp = getch();
	if (tmp == DOWN_KEY)
	{
		down_deplacement(map);
		create_case(map);
	}
	
/*
=======
	tmp = getch();
	if (tmp == DOWN_KEY)
		down_move(map);
>>>>>>> 51533f18406ecff37e9777d0ebe89ab4a769c808
	else if (tmp == UP_KEY)
		up_move(map);
	else if (tmp == LEFT_KEY)
		left_move(map);
	else if (tmp == RIGHT_KEY)
		right_move(map);
	else
		return (ERROR);
	return (SUCCESS);
}
