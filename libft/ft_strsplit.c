/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:01:39 by alegent           #+#    #+#             */
/*   Updated: 2015/01/03 15:49:59 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] && ft_isprint(s[i]))
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (words);
}

static size_t	get_word_length(const char *s, char c)
{
	size_t	length;
	int		i;

	length = 0;
	i = 0;
	while (s[i++] != c && s[i])
		length++;
	return (length);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		i;
	int		x;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(tab = (char **)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s && ft_isprint(*s))
		{
			x = 0;
			if (!(tab[i] = ft_strnew(get_word_length(s, c))))
				return (NULL);
			while (*s != c && *s && ft_isprint(*s))
				tab[i][x++] = *s++;
			tab[i++][x] = '\0';
		}
	}
	tab[i] = 0;
	return (tab);
}
