/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:22:25 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 18:00:08 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int						rush2042(int **map)
{
	int				tmp;

	tmp = getch();
	if (tmp == KEY_DOWN)
		down_move(map);
	else if (tmp == KEY_UP)
		up_move(map);
	else if (tmp == KEY_LEFT)
		left_move(map);
	else if (tmp == KEY_RIGHT)
		right_move(map);
	else if (tmp == ESC_KEY || tmp == Q_KEY)
		exit(EXIT_SUCCESS);
	else
		return (ERROR);
	return (SUCCESS);
}
