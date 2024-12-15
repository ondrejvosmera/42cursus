/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:53:44 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 17:53:46 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_rectangle(t_map *map)
{
	int	i;

	i = 1;
	while (i < map->height)
	{
		if ((int)ft_strlen(map->grid[i]) != map->width)
			return (0);
		i++;
	}
	return (1);
}

int	is_closed(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->width)
	{
		if (map->grid[0][i] != '1'
			|| map->grid[map->height - 1][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (i < map->height)
	{
		if (map->grid[i][0] != '1'
			|| map->grid[i][map->width - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	valid_chars_counts(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			if (!ft_strchr("01CPEB\n", map->grid[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
