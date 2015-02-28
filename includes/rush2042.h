/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:38 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 17:32:56 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2042_H
# define RUSH2042_H
# include "libft.h"
# include <ncurses.h>
# include <time.h>
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
	int					x_per_four;
	int					y_per_four;
	int					x_max;
	int					y_max;
};

t_xy					*create_map(void);
t_xy					*new_xy(void);
int						**init_map(void);
int						rand_a_b(int a, int b);
int						rand_a_else_b(int a, int b);
int						key_hook(int button);
void					create_case(int ***new);
void					read_map(int **map, t_xy *max);
int						rush2042(int ***map);

#endif
