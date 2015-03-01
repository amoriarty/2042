/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:38 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 13:43:26 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2042_H
# define RUSH2042_H
# include "libft.h"
# include <ncurses.h>
# include <time.h>
# include <menu.h>
# define TRUE 1
# define FALSE 0
# define ERROR -1
# define EOL '\n'
# define SUCCESS 1
# define FAILURE 0
# define UP_KEY 65
# define DOWN_KEY 66
# define LEFT_KEY 68
# define RIGHT_KEY 67
# define Q_KEY 113
# define ESC_KEY 27

typedef struct s_xy		t_xy;
struct					s_xy
{
	int					width;
	int					height;
	int					x_max;
	int					y_max;
};
enum	e_const
{
	WIN_VALUE = 2048
};
typedef struct s_env	t_env;
struct					s_env
{
	int					grid_size;
};
t_xy					*create_map(t_env *env);
t_xy					*new_xy(t_env *env);
int						**init_map(void);
int						rand_a_b(int a, int b);
int						key_hook(int button);
void					create_case(int **new);
void					read_map(int **map, t_xy *max);
int						rush2042(int **map);
void					error(char *s, char *s2);
int						check_win_value(int value);
void					down_move(int **map);
void					up_move(int **map);
void					left_move(int **map);
void					right_move(int **map);
void					create_menu(t_env *env);

#endif
