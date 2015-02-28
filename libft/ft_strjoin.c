/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:48:53 by alegent           #+#    #+#             */
/*   Updated: 2015/01/03 15:48:59 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	x = 0;
	if ((res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[x] = s1[i];
		i++;
		x++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		res[x] = s2[i];
		i++;
		x++;
	}
	res[x] = '\0';
	return (res);
}
