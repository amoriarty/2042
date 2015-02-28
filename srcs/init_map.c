/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:20:16 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 12:42:00 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

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
	return (new);
}
