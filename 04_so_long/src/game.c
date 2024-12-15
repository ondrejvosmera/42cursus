/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:53:59 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:32:01 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static mlx_image_t	*load_img(mlx_t *mlx, char *path)
{
	mlx_texture_t	*tex;
	mlx_image_t		*img;

	tex = mlx_load_png(path);
	if (!tex)
		error_msg("Failed to load texture");
	img = mlx_texture_to_image(mlx, tex);
	mlx_delete_texture(tex);
	if (!img)
		error_msg("Failed to create image from texture");
	return (img);
}

void	init_images(t_game *game)
{
	game->wall_img = load_img(game->mlx, "images/wall.png");
	game->floor_img = load_img(game->mlx, "images/floor.png");
	game->player_img = load_img(game->mlx, "images/player.png");
	game->collect_img = load_img(game->mlx, "images/collectible.png");
	game->exit_img = load_img(game->mlx, "images/exit.png");
	game->enemy_img = load_img(game->mlx, "images/enemy.png");
}

void	init_game(t_game *game)
{
	game->mlx = mlx_init(game->map.width * 64,
			game->map.height * 64, "so_long", false);
	if (!game->mlx)
		error_msg("Failed to init mlx");
	game->moves = 0;
	init_images(game);
}

void	start_game(t_game *game)
{
	render_map(game);
	mlx_key_hook(game->mlx, key_hook, game);
	mlx_close_hook(game->mlx, destroy_hook, game);
}
