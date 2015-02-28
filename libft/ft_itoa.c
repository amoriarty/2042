/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:37:30 by alegent           #+#    #+#             */
/*   Updated: 2014/12/30 11:15:37 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int		isneg;
	int		digitlen;
	char	*itoa;

	isneg = FALSE;
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		n = -n;
		isneg = TRUE;
	}
	digitlen = ft_digitlen(n) + isneg;
	itoa = ft_strnew(digitlen);
	itoa[digitlen--] = '\0';
	while (n != 0)
	{
		itoa[digitlen--] = (n % 10) + '0';
		n /= 10;
	}
	if (isneg == TRUE)
		itoa[digitlen] = '-';
	return (itoa);
}
