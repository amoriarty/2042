/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:32:38 by alegent           #+#    #+#             */
/*   Updated: 2015/01/03 15:49:23 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int		i;
	unsigned int		len;
	char				*map;

	if (s != NULL && f != NULL)
	{
		i = 0;
		len = ft_strlen(s);
		map = ft_strnew(len);
		if (map == NULL)
			return (NULL);
		if (f == NULL)
			return (ft_strdup(s));
		while (i < len)
		{
			map[i] = (*f)(s[i]);
			i++;
		}
		map[i] = '\0';
		return (map);
	}
	return (NULL);
}
