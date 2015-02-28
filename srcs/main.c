/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 09:16:55 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int		main(void)
{

	initscr();//Ouvre la fenetre.
	mvprintw(12, 20, "Movement");
	mvaddch(12, 50, '@');
	mvaddch(12, 20, 'm');
	mvprintw(12, 21, "OUVEMENT");
	getch();//Ouvre la bouche.
	endwin();//Ouvre la fenetre.
	return (2042);
}
