/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:20:16 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 15:24:17 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"
#include <stdio.h>
static void			create_case(int ***new)
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

int					**init_map(void)
{
	int				x;
	int				y;
	int				**new;

	if (!(new = (int **)malloc(sizeof(int *) * 4)))
		ft_puterror("2042", "malloc error");
	x = 0;
	while (x < 4)
	{
		if (!(new[x] = (int *)malloc(sizeof(int))))
			ft_puterror("2042", "malloc error");
		x++;
	}
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			new[x][y] = 0;
			y++;
		}
		x++;
	}
	x = 0;
	srand(time(NULL));
	while (x < 2)
	{
		create_case(&new);
		x++;
	}
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putnbr(new[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	return (new);
}
