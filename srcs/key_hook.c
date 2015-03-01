/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 14:26:24 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 09:50:33 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int				key_hook(int button)
{
	if (button == Q_KEY || button == ESC_KEY)
		exit(EXIT_SUCCESS);
	return (button);
}
