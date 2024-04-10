/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:57:31 by ovosmera          #+#    #+#             */
/*   Updated: 2024/04/09 14:59:21 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>


static char	*read_file(int fd)
{
	int			bytes_read;
	char		*buffer;
	//static int	count = 1;

	buffer = calloc(BUFFER_SIZE + 1, sizeof(char));

	if (buffer == NULL)
		return (NULL);

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		free (buffer);
		return (NULL);
	}

	return (buffer);
}

char	*get_next_line(int fd)
{
	char	*buffer;

	buffer = read_file(fd);
	return (buffer);
}


/* 
int	main(void)
{
	int		fd;
	char	*next_line;
	int		count;

	count = 0;
	fd = open("example.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening file.");
		return (1);
	}
	while (1)
	{
		next_line = get_next_line(fd);
		if (next_line == NULL)
			break ;
		count++;
		printf("[%d] %s\n", count, next_line);
		free(next_line);
		next_line = NULL;
	}

	close(fd);
	return (0);
}
 */