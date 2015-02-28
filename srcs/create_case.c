/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:45:12 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 16:27:46 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

void				create_case(int ***new)
{
	int				sq;
	int				x;
	int				y;

	sq = rand_a_b(0, 15);
	x = sq / 4;
	y = sq % 4;
	if ((*new)[x][y] == 0)
		(*new)[y][y] = rand_a_else_b(2, 4);
	else
		create_case(new);
}
