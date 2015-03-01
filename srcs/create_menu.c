/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_menu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 09:07:04 by chaueur           #+#    #+#             */
/*   Updated: 2015/03/01 13:32:48 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#define CTRLD 	4

char *g_choices[] = {
	"Play",
	"Grid size",
	"Exit"};

static int				launch_item(MENU *my_menu, t_env *env)
{
	ITEM				*cur_item;

	cur_item = current_item(my_menu);
	if (item_index(cur_item) == 0)
		return (0);
	else if (item_index(cur_item) == 1)
	{
		(env->grid_size > 4) ? env->grid_size-- : env->grid_size++;
		mvprintw(LINES - 2, 0, "%d", env->grid_size);
		return (1);
	}
	else
	{
		mvprintw(LINES - 2, 0, "TOTO");
		refresh();
		return (1);
	}
}

static void				launch_menu(ITEM **my_items, t_env *env)
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
			if (launch_item(my_menu, env) == 0)
				break ;
		}
	}
	free_item(my_items[0]);
	free_item(my_items[1]);
	free_menu(my_menu);
	(c == ESC_KEY) ? exit(EXIT_SUCCESS) : 0;
}

void					create_menu(t_env *env)
{
	int					n_choices;
	ITEM				**my_items;
	int					i;

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
	launch_menu(my_items, env);
	endwin();
}
