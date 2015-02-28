/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/30 12:31:24 by alegent           #+#    #+#             */
/*   Updated: 2014/12/30 12:33:08 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putcolor(char *str, char *color)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(CANCEL);
}
