/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:31:29 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 02:26:43 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

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
