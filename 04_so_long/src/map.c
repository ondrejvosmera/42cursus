/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:52:32 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:26:08 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	count_lines(char *filename)
{
	int		fd;
	int		count;
	char	*line;

	count = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		error_msg("Failed to open map file");
	line = get_next_line(fd);
	while (line)
	{
		free(line);
		count++;
		line = get_next_line(fd);
	}
	close(fd);
	return (count);
}

static void	read_map(char *filename, t_map *map)
{
	int		i;
	int		fd;
	size_t	len;

	map->grid = malloc(sizeof(char *) * map->height);
	if (!map->grid)
		error_msg("Malloc failed");
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		error_msg("Failed to open map file");
	i = 0;
	while (i < map->height)
	{
		map->grid[i] = get_next_line(fd);
		if (!map->grid[i])
			error_msg("Invalid map file");
		len = ft_strlen(map->grid[i]);
		if (len > 0 && map->grid[i][len - 1] == '\n')
			map->grid[i][len - 1] = '\0';
		i++;
	}
	close(fd);
}

void	parse_map(char *filename, t_map *map)
{
	map->height = count_lines(filename);
	if (map->height == 0)
		error_msg("Map is empty");
	read_map(filename, map);
	map->width = (int)ft_strlen(map->grid[0]);
	map->collect_count = 0;
	map->player_count = 0;
	map->exit_count = 0;
}
