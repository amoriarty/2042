/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_xy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:59:44 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 10:02:05 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

t_xy				*new_xy(void)
{
	t_xy			*new;

	if (!(new = (t_xy *)malloc(sizeof(t_xy))))
		ft_puterror("2042", "Malloc error");
	getmaxyx(stdscr, new->x_max, new->y_max);
	new->x_per_four = new->x_max / 4;
	new->y_per_four = new->y_max / 4;
	return (new);
}
