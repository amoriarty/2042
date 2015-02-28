/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:22:54 by alegent           #+#    #+#             */
/*   Updated: 2015/01/03 15:48:50 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	unsigned int		i;
	unsigned int		len;

	if (s != NULL && f != NULL)
	{
		i = 0;
		len = ft_strlen(s);
		if (s != NULL && f != NULL)
		{
			while (i < len)
			{
				(*f)(s);
				s++;
				i++;
			}
		}
	}
}
