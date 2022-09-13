/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:22:14 by frcarval          #+#    #+#             */
/*   Updated: 2022/02/10 23:27:45 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	master[FOPEN_MAX][BUFFER_SIZE];
	t_gnl		gnl;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FOPEN_MAX)
		return (NULL);
		gnl.line = NULL;
		gnl.size = 0;
		gnl.counter = 0;
	while (1)
	{
		if (!master[fd][0])
			gnl.counter = read(fd, master[fd], BUFFER_SIZE);
		else
			gnl.counter = ft_finder(master[fd], '\n', 1);
		gnl.size += ft_finder(master[fd], '\n', 1);
		if (gnl.counter > 0)
			gnl.line = ft_slave(gnl.line, master[fd], gnl.size);
		if (ft_finder(gnl.line, '\n', -1) != -1 || gnl.counter <= 0)
			return (gnl.line);
	}
	return (gnl.line);
}
