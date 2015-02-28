/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/02/28 19:07:30 by alegent          ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2015/02/28 18:00:14 by chaueur          ###   ########.fr       */
=======
/*   Updated: 2015/02/28 17:37:11 by alegent          ###   ########.fr       */
>>>>>>> ba51190bf78c876b504aeb9dfeb30f1f8d95518b
>>>>>>> 7f1016d78b00e3134550573184fd7badd4d564e6
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int					main(void)
{
	t_xy			*max;
	int				**map;

	initscr();
	curs_set(FALSE);
	map = init_map();
	map = map;
	while (42)
	{
		clear();
		if ((max = create_map()))
		{
			read_map(map, max);
			refresh();
		}
		else
		{
			clear();
			endwin();
			ft_puterror("2042", "Window size too small");
			break;
		}
		//rush2042(&map);
		max = max;
	}
	endwin();
	return (2042);
}
