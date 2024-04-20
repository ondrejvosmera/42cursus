/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:57:31 by ovosmera          #+#    #+#             */
/*   Updated: 2024/04/20 13:56:58 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <fcntl.h>

char	*read_line(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	if (!*buffer)
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	line = ft_calloc(i + 1, sizeof(char));
	if (line == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		line[j] = buffer[j];
		j++;
	}
	return (line);
}

char	*remove_line(char *buffer)
{
	char	*tmp;

	tmp = ft_strchr(buffer, '\n');
	if (tmp != NULL)
	{
		tmp = ft_strdup(tmp + 1);
		free(buffer);
		return (tmp);
	}
	else
	{
		free(buffer);
		return (NULL);
	}
}

char	*read_file(char *buffer, int fd)
{
	char	*tmp;
	char	*buff;
	int		bytes_read;

	buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (buff == NULL)
		return (NULL);
	bytes_read = read(fd, buff, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buff[bytes_read] = '\0';
		if (buffer == NULL)
			buffer = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(buffer, buff);
			free(buffer);
			buffer = tmp;
		}
		if (ft_strchr(buffer, '\n') != NULL)
			break ;
		bytes_read = read(fd, buff, BUFFER_SIZE);
	}
	free(buff);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(buffer, fd);
	if (buffer == NULL)
		return (NULL);
	line = read_line(buffer);
	buffer = remove_line(buffer);
	return (line);
}

/* int main(void)
{
	int fd;
	char *line;

	fd = open("test_files/file1.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}

	if (close(fd) == -1)
	{
		perror("Error closing file");
		return 1;
	}

	return 0;
} */
