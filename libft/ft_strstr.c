/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:41:10 by rdestreb          #+#    #+#             */
/*   Updated: 2015/01/03 16:47:29 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = -1;
	if (!(s2[0]))
		return ((char*)s1);
	while (s1[++i])
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && s1[i + j] && s2[j])
			{
				j++;
				if (!(s2[j]))
					return ((char*)s1 + i);
			}
		}
	}
	return (NULL);
}
