/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:09:45 by ovosmera          #+#    #+#             */
/*   Updated: 2024/04/20 13:56:40 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
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
	static char	*buffer[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_file(buffer[fd], fd);
	if (buffer[fd] == NULL)
		return (NULL);
	line = read_line(buffer[fd]);
	buffer[fd] = remove_line(buffer[fd]);
	return (line);
}

/* int main(void) {
    int fd1, fd2, fd3;
    char *line;

    fd1 = open("test_files/file1.txt", O_RDONLY);
    fd2 = open("test_files/file2.txt", O_RDONLY);
    fd3 = open("test_files/file3.txt", O_RDONLY);

    if (fd1 == -1 || fd2 == -1 || fd3 == -1) {
        perror("Error opening files");
        return 1;
    }

    printf("Reading one line from each file:\n");
    line = get_next_line(fd1);
    printf("File 1: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("File 2: %s", line);
    free(line);

    line = get_next_line(fd3);
    printf("File 3: %s", line);
    free(line);

    printf("\nReading the next line from each file:\n");
    line = get_next_line(fd1);
    printf("File 1: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("File 2: %s", line);
    free(line);

    line = get_next_line(fd3);
    printf("File 3: %s", line);
    free(line);

	printf("\nReading the next line from each file:\n");
    line = get_next_line(fd1);
    printf("File 1: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("File 2: %s", line);
    free(line);

    line = get_next_line(fd3);
    printf("File 3: %s", line);
    free(line);

    if (close(fd1) == -1 || close(fd2) == -1 || close(fd3) == -1) {
        perror("Error closing files");
        return 1;
    }

    return 0;
} */
