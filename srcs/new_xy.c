/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_xy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:59:44 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 10:36:48 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

t_xy				*new_xy(t_env *env)
{
	t_xy			*new;

	if (!(new = (t_xy *)malloc(sizeof(t_xy))))
		ft_puterror("2042", "Malloc error");
	getmaxyx(stdscr, new->x_max, new->y_max);
	new->width = new->x_max / env->grid_size;
	new->height = new->y_max / env->grid_size;
	return (new);
}
