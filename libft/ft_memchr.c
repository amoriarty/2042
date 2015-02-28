/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:21:44 by alegent           #+#    #+#             */
/*   Updated: 2015/01/04 10:20:48 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	void		*tmp;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		if (*(unsigned char *)tmp == (unsigned char)c)
			return ((void *)tmp);
		i++;
		tmp++;
	}
	return (NULL);
}
