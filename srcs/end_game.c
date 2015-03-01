/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:31:29 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 03:13:32 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

void				check_win_value(int value)
{
	enum e_const	win;

	win = WIN_VALUE;
	if (win < 8)
		error("2042", "Please insert a higher win value.");
	if ((win != 0) && ((win & (win - 1)) == 0))
	{
		if ((unsigned)value == win)
			success();
	}
	else
		error("2042", "Win value must be power of 2.");
}

void				error(char *s, char *s2)
{
		clear();
		endwin();
		ft_puterror(s, s2);
}
void				success(void)
{
	clear();
	ft_putendl("You win !");
	exit(EXIT_SUCCESS);
}

void				failure(void)
{
	clear();
	ft_putendl("You lose !");
	exit(EXIT_SUCCESS);
}
