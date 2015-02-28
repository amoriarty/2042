/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:20:16 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 16:12:30 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

static int			**tmp_malloc(void)
{
	int				x;
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
	return (new);
}

int					**init_map(void)
{
	int				x;
	int				y;
	int				**new;

	x = 0;
	new = tmp_malloc();
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
	return (new);
}
