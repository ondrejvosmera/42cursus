/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:53:21 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:30:17 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	flood_fill(char **grid, int x, int y, t_map *map)
{
	if (y < 0 || y >= map->height || x < 0 || x >= map->width)
		return ;
	if (grid[y][x] == '1' || grid[y][x] == 'X')
		return ;
	grid[y][x] = 'X';
	flood_fill(grid, x + 1, y, map);
	flood_fill(grid, x - 1, y, map);
	flood_fill(grid, x, y + 1, map);
	flood_fill(grid, x, y - 1, map);
}

void	check_path(t_map *map)
{
	int		i;
	int		j;
	char	**copy;

	i = -1;
	copy = malloc(sizeof(char *) * map->height);
	if (!copy)
		error_msg("Malloc failed");
	while (++i < map->height)
		copy[i] = ft_strdup(map->grid[i]);
	flood_fill(copy, map->player_x, map->player_y, map);
	i = -1;
	while (++i < map->height)
	{
		j = -1;
		while (++j < map->width)
			if ((map->grid[i][j] == 'C' || map->grid[i][j] == 'E')
			&& copy[i][j] != 'X')
				error_msg("No valid path");
		free(copy[i]);
	}
	free(copy);
}
