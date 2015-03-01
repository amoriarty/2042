/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:31:29 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 04:32:34 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int						check_win_value(int value)
{
	enum e_const		win;

	win = WIN_VALUE;
	if (win < 8)
	{
		return FAILURE;
		error("2042", "Please insert a higher win value.");
	}
	if ((win != 0) && ((win & (win - 1)) == 0))
	{
		if (win == (unsigned)value)
			return SUCCESS;
		return FAILURE;
	}
	else
	{
		return FAILURE;
		error("2042", "Win value must be power of 2.");
	}
		
}