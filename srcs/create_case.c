/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:45:12 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 15:47:00 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

void				create_case(int ***new)
{
	int				sq;
	int				i;
	int				j;

	sq = rand_a_b(0, 15);
	i = sq / 4;
	j = sq % 4;
	if ((*new)[i][j] == 0)
		(*new)[i][j] = rand_a_else_b(2, 4);
	else
		create_case(new);
}
