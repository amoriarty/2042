/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:31:29 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 18:28:40 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int						check_win_value(void)
{
	if (WIN_VALUE < 8)
		ft_puterror("2042", "WIN VALUE INCORRECT");
	if ((WIN_VALUE != 0) && (WIN_VALUE & (WIN_VALUE - 1))
			== 0)
		return (TRUE);
	error("2042", "WIN VALUE INCORRECT");
	return (FALSE);
}
