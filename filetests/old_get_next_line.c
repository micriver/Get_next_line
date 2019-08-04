/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:45:22 by mirivera          #+#    #+#             */
/*   Updated: 2019/04/08 18:50:40 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** THERE CANNOT BE A MAIN IN THIS FILE!!!! ✓
*/

#include "get_next_line.h"

/*
** Properly populating our static string, temp[fd]
** for get_line manipulation
** with an 'if nothing's there...' check
** and a check to take what's leftover
** from our get_line function's remaining lines to be cut! ✓
*/

int		ft_read(char **temp, int fd)
{
	char	*buffer;
	char	*tempmem;
	int		result;

	buffer = ft_strnew(BUFF_SIZE);
	while ((result = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		if (!temp[fd])
		{
			buffer[result] = '\0';
			temp[fd] = ft_strdup(buffer);
		}
		else
		{
			buffer[result] = '\0';
			tempmem = ft_strjoin(temp[fd], buffer);
			free(temp[fd]);
			temp[fd] = tempmem;
		}
		ft_bzero(buffer, BUFF_SIZE);
	}
	free(buffer);
	return (result);
}

/*
** In the get_line function we are returning a line to the 2D array
** that will be printed in the main
*/

int		ft_get_line(char **temp, int fd, char **line)
{
	char *str;
	char *tempmem;

	if ((str = ft_strchr(temp[fd], '\n')))
	{
		tempmem = temp[fd];
		*str = '\0';
		*line = ft_strndup(temp[fd], str - temp[fd]);
		temp[fd] = ft_strdup(str + 1);
		free(tempmem);
		return (1);
	}
	else if (*temp[fd])
	{
		*line = ft_strdup(temp[fd]);
		temp[fd] = ft_strnew(BUFF_SIZE);
		return (1);
	}
	return (0);
}

/*
** Get next line should create a static string so you can store value in there ✓
**
** Allow for the maximum number of file descriptors, get that right! ✓
** ulimit -n is the display max fd command to find out ✓
**
** Check for negative fd's, no lines, negative BUFF_SIZE ✓
**
** Check the amount of bytes returned isn't negative ✓
**
** If you return a line, return TRUE ✓
*/

int		get_next_line(const int fd, char **line)
{
	static char *temp[4864];

	if (fd < 0 || !line || BUFF_SIZE < 0)
		return (-1);
	if (ft_read(&temp[fd], fd))
		return (-1);
	if (ft_get_line(&temp[fd], fd, line) == 1)
		return (1);
	return (0);
}
