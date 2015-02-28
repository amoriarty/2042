/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:50:50 by alegent           #+#    #+#             */
/*   Updated: 2014/11/14 18:00:25 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\v' || c == '\r'
			|| c == '\n')
		return (TRUE);
	return (FALSE);
}

int			ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		sign;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_trim(str[i]) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i - 1] == '-')
		sign = -1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (res * sign);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
