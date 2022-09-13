/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:22:36 by frcarval          #+#    #+#             */
/*   Updated: 2022/02/10 23:23:12 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_slave
{
	char	*temp;
	int		counter;
	int		another_counter;
	int		indx;
}	t_slave;

typedef struct s_gnl
{
	char	*line;
	int		counter;
	int		size;
}	t_gnl;

char	*get_next_line(int fd);
char	*ft_slave(char *line, char *master, int line_size);
int		ft_finder(char *str, char chr, int selector);

#endif