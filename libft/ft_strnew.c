/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:19:08 by alegent           #+#    #+#             */
/*   Updated: 2015/01/03 16:22:31 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
