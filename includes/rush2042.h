/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2042.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 09:16:38 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 10:13:11 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2042_H
# define RUSH2042_H
# include "libft.h"
# include <ncurses.h>

typedef struct s_xy		t_xy;
struct					s_xy
{
	int					x_per_four;
	int					y_per_four;
	int					x_max;
	int					y_max;
};

void					create_map(void);
t_xy					*new_xy(void);

#endif
