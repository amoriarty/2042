/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:45:12 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 04:08:49 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

void				create_case(int **new)
{
	int				sq;
	int				x;
	int				y;

	sq = rand_a_b(0, 15);
	x = sq / 4;
	y = sq % 4;
	if (new[x][y] == 0)
	{
		sq = rand_a_b(1, 10);
		(sq % 2 == 0) ? (new[x][y] = 2) : (new[x][y] = 4);
	}
	else
		create_case(new);
}
