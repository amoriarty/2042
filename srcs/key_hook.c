/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 14:26:24 by alegent           #+#    #+#             */
/*   Updated: 2015/03/01 12:49:41 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"

int				key_hook(int button)
{
	if (button == Q_KEY || button == ESC_KEY)
		ft_putnbr(button);
	return (button);
}
