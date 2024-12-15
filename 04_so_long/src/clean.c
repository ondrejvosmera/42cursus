/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:54:46 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:38:30 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	cleanup(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.height)
	{
		free(game->map.grid[i]);
		i++;
	}
	free(game->map.grid);
	if (game->player_img)
		mlx_delete_image(game->mlx, game->player_img);
	if (game->collect_img)
		mlx_delete_image(game->mlx, game->collect_img);
	if (game->exit_img)
		mlx_delete_image(game->mlx, game->exit_img);
	if (game->wall_img)
		mlx_delete_image(game->mlx, game->wall_img);
	if (game->floor_img)
		mlx_delete_image(game->mlx, game->floor_img);
}

void	destroy_hook(void *param)
{
	t_game	*g;

	g = (t_game *)param;
	cleanup(g);
	mlx_terminate(g->mlx);
	exit(0);
}
