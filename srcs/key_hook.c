/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 14:26:24 by alegent           #+#    #+#             */
/*   Updated: 2015/02/28 15:29:03 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int				key_hook(int button)
{
	if (button == Q_KEY || button == ESC_KEY)
		exit(EXIT_SUCCESS);
	return (SUCCESS);
}
