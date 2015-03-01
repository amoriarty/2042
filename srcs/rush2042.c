/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:22:25 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 04:17:19 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int						rush2042(int **map)
{
	int					tmp;

	tmp = getch();
	if (tmp == DOWN_KEY)
		down_move(map);
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
