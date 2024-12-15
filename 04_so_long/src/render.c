/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:54:31 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:37:46 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	put_tile(mlx_t *mlx, mlx_image_t *img, int x, int y)
{
	mlx_image_to_window(mlx, img, x * 64, y * 64);
}

static mlx_image_t	*choose_tile(t_game *g, char c)
{
	if (c == '1')
		return (g->wall_img);
	else if (c == 'P')
		return (g->player_img);
	else if (c == 'C')
		return (g->collect_img);
	else if (c == 'E')
		return (g->exit_img);
	else if (c == 'B')
		return (g->enemy_img);
	return (g->floor_img);
}

void	render_map(t_game *g)
{
	int	i;
	int	j;

	mlx_delete_image(g->mlx, g->floor_img);
	g->floor_img = mlx_texture_to_image(g->mlx,
			mlx_load_png("images/floor.png"));
	i = 0;
	while (i < g->map.height)
	{
		j = 0;
		while (j < g->map.width)
		{
			put_tile(g->mlx, choose_tile(g, g->map.grid[i][j]), j, i);
			j++;
		}
		i++;
	}
}
