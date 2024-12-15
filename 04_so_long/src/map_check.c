/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:52:51 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 17:52:58 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	count_chars(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			if (map->grid[i][j] == 'C')
				map->collect_count++;
			else if (map->grid[i][j] == 'P')
			{
				map->player_count++;
				map->player_x = j;
				map->player_y = i;
			}
			else if (map->grid[i][j] == 'E')
				map->exit_count++;
			j++;
		}
		i++;
	}
}

void	check_map_validity(t_map *map)
{
	if (!is_rectangle(map))
		error_msg("Map is not rectangular");
	if (!is_closed(map))
		error_msg("Map is not closed by walls");
	if (!valid_chars_counts(map))
		error_msg("Map contains invalid characters");
	count_chars(map);
	if (map->exit_count != 1 || map->player_count != 1
		|| map->collect_count < 1)
		error_msg("Map must have 1 player, 1 exit, >=1 collect");
}
