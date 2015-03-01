/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 16:32:30 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 16:33:43 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int					winner(int **map)
{
	int				x;
	int				y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (map[x][y] == WIN_VALUE)
				return (TRUE);
			y++;
		}
		x++;
	}
	return (FALSE);
}
