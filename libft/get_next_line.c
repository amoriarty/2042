/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 17:19:47 by alegent           #+#    #+#             */
/*   Updated: 2015/02/11 12:01:04 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				text_copy(int const fd, char **line)
{
	int				ret;
	char			*tmp;
	char			buffer[BUFF_SIZE + 1];

	ret = -2;
	tmp = NULL;
	while ((!ft_strchr(*line, EOL)))
	{
		if ((ret = read(fd, buffer, BUFF_SIZE)) <= 0)
			return (ret);
		tmp = *line;
		buffer[ret] = 0;
		if (!(*line = ft_strjoin(*line, buffer)))
			return (ERROR);
		ft_strdel(&tmp);
		if (ret < BUFF_SIZE)
			return (ret);
	}
	return (ret);
}

static char				*get_line(char *offset, char **line)
{
	char			*tmp;
	char			*del;

	del = offset;
	if (offset && (tmp = ft_strchr(offset, EOL)))
	{
		*line = ft_strsub(offset, 0, ft_strlen(offset) - ft_strlen(tmp));
		offset = ft_strdup(tmp + 1);
		ft_strdel(&del);
	}
	else
	{
		*line = ft_strdup(offset);
		ft_strclr(offset);
	}
	return (offset);
}

int						get_next_line(int const fd, char **line)
{
	int				ret;
	static char		*offset;

	if (!line)
		return (ERROR);
	if (!offset)
		offset = ft_strnew(0);
	if ((ret = text_copy(fd, &offset)) == ERROR)
		return (ERROR);
	offset = get_line(offset, line);
	if ((!ret && !ft_strlen(offset) && !ft_strlen(*line)))
		return (0);
	else
		return (1);
}
