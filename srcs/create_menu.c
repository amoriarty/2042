/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_menu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 09:07:04 by chaueur           #+#    #+#             */
/*   Updated: 2015/03/01 17:59:37 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

static int				launch_item(MENU *my_menu)
{
	ITEM				*cur_item;

	cur_item = current_item(my_menu);
	if (item_index(cur_item) == 0)
		return (1);
	else if (item_index(cur_item) == 1)
		exit(EXIT_SUCCESS);
	return (0);
}

static void				launch_menu(ITEM **my_items)
{
	int					c;
	MENU				*my_menu;

	my_menu = new_menu((ITEM **)my_items);
	mvprintw(LINES - 2, 0, "ESC to Exit");
	post_menu(my_menu);
	refresh();
	while ((c = getch()) != ESC_KEY)
	{
		if (c == KEY_DOWN)
			menu_driver(my_menu, REQ_DOWN_ITEM);
		else if (c == KEY_UP)
			menu_driver(my_menu, REQ_UP_ITEM);
		else if (c == 10)
		{
			if (launch_item(my_menu) == 1)
				break ;
		}
	}
	free_item(my_items[0]);
	free_item(my_items[1]);
	free_menu(my_menu);
	(c == ESC_KEY) ? exit(EXIT_SUCCESS) : 0;
}

void					create_menu(void)
{
	char				*g_choices[2];
	int					n_choices;
	ITEM				**my_items;
	int					i;

	g_choices[0] = ft_strdup("Play");
	g_choices[1] = ft_strdup("Exit");
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	n_choices = ARRAY_SIZE(g_choices);
	my_items = (ITEM **)calloc(n_choices + 1, sizeof(ITEM *));
	i = 0;
	while (i < n_choices)
	{
		my_items[i] = new_item(g_choices[i], 0);
		i++;
	}
	my_items[n_choices] = (ITEM *)NULL;
	launch_menu(my_items);
	endwin();
}
