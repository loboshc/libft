/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:41:20 by dlobos-m          #+#    #+#             */
/*   Updated: 2020/01/21 17:20:23 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#define BUFFER_SIZE 1

static int		print_line(char **file, char **line)
{
	char	*temp;
	int		x;

	x = 0;
	temp = 0;
	while ((*file)[x] != '\n' && (*file)[x])
		x++;
	*line = ft_substr(*file, 0, x);
	if ((*file)[x] == '\n')
		temp = ft_strdup(ft_strchr(*file, '\n') + 1);
	free(*file);
	*file = temp;
	return (!temp ? 0 : 1);
}

int		get_next_line(int fd, char **line)
{
	int			i;
	static char *file[4096];
	char		*temp;
	char		buf[BUFFER_SIZE + 1];

	while ((i = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[i] = '\0';
		if (file[fd] == NULL)
			file[fd] = ft_strdup("");
		temp = ft_strjoin(file[fd], buf);
		free(file[fd]);
		file[fd] = temp;
		if (ft_strchr(file[fd], '\n'))
			break ;
	}
	if (i < 0)
		return (-1);
	if (i == 0 && !file[fd])
	{
		*line = ft_strdup("");
		return (0);
	}
	return (print_line(&file[fd], line));
}
