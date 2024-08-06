/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:06:20 by ovosmera          #+#    #+#             */
/*   Updated: 2024/08/06 15:06:22 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void load_texture(mlx_texture_t **texture, const char *file_path) {
    *texture = mlx_load_png(file_path);
    if (!*texture) {
        fprintf(stderr, "Failed to load texture from %s\n", file_path);
        exit(EXIT_FAILURE);
    }
}

void setup_textures(t_game *game) {
    load_texture(&game->images.player_texture, "images/player.png");
    load_texture(&game->images.wall_texture, "images/wall.png");
    load_texture(&game->images.floor_texture, "images/floor.png");
    load_texture(&game->images.collectible_texture, "images/collectible.png");
    load_texture(&game->images.exit_texture, "images/exit.png");
    load_texture(&game->images.enemy_texture, "images/enemy.png");

    game->images.player_image = mlx_texture_to_image(game->mlx, game->images.player_texture);
    game->images.wall_image = mlx_texture_to_image(game->mlx, game->images.wall_texture);
    game->images.floor_image = mlx_texture_to_image(game->mlx, game->images.floor_texture);
    game->images.collectible_image = mlx_texture_to_image(game->mlx, game->images.collectible_texture);
    game->images.exit_image = mlx_texture_to_image(game->mlx, game->images.exit_texture);
    game->images.enemy_image = mlx_texture_to_image(game->mlx, game->images.enemy_texture);

    if (!game->images.player_image || !game->images.wall_image || !game->images.floor_image ||
        !game->images.collectible_image || !game->images.exit_image || !game->images.enemy_image) {
        fprintf(stderr, "Failed to create images from textures\n");
        exit(EXIT_FAILURE);
    }
}
