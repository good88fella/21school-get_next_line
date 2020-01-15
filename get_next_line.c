/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:40:20 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/17 14:16:45 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		get_tail(char *buff, char **tail)
{
	char	*tmp_tail;

	if (*tail)
	{
		if (!(tmp_tail = ft_strjoin(*tail, buff)))
			return (-1);
		ft_strdel(tail);
		*tail = tmp_tail;
	}
	else
	{
		if (!(*tail = ft_strdup(buff)))
			return (-1);
	}
	return (0);
}

static char		*get_line(char **tail, char *lb)
{
	char		*tmp_tail;
	char		*line;

	tmp_tail = NULL;
	if (!(line = ft_strdup(*tail)))
		return (NULL);
	if (lb)
		if (!(tmp_tail = ft_strdup(lb)))
			return (NULL);
	ft_strdel(tail);
	*tail = tmp_tail;
	return (line);
}

static int		check_line(int bytes, char **tail, char **line)
{
	char	*lb;

	if ((lb = ft_strchr(*tail, '\n')))
	{
		*lb = '\0';
		lb++;
	}
	if (lb || bytes == 0)
	{
		if (!(*line = get_line(tail, lb)))
			return (-1);
	}
	else
	{
		return (0);
	}
	return (1);
}

static int		read_line(const int fd, char **tail, char **line)
{
	char		buff[BUFF_SIZE + 1];
	int			bytes;
	int			check;

	while ((bytes = read(fd, buff, BUFF_SIZE)))
	{
		if (bytes < 0)
			return (-1);
		buff[bytes] = '\0';
		if (get_tail(buff, tail) == -1)
			return (-1);
		if ((check = check_line(bytes, tail, line)) == -1)
			return (-1);
		if (check == 1)
			return (1);
	}
	if (*tail != NULL && **tail != '\0')
		return (check_line(bytes, tail, line));
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*tail[4864];
	int			isready;

	if (!line || fd < 0 || fd >= 4864)
		return (-1);
	isready = read_line(fd, &tail[fd], line);
	if (isready != 1)
		tail[fd] = NULL;
	return (isready);
}
