/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:45:12 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 11:26:50 by alegent          ###   ########.fr       */
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
		new[x][y] = (sq % 2 == 0) ? 2 : 4;
	}
	else
		create_case(new);
}
