/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:36 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 10:12:43 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int					main(void)
{
	initscr();
	create_map();
	refresh();
	getch();
	endwin();
	return (2042);
}
