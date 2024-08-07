/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:07:25 by ovosmera          #+#    #+#             */
/*   Updated: 2024/08/07 17:28:27 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void render_map_initial(t_game *game) {
    int x, y;
    mlx_image_t *current_image;

    // Render the entire map
    for (y = 0; game->map[y]; y++) {
        for (x = 0; game->map[y][x]; x++) {
            switch (game->map[y][x]) {
                case '1': current_image = game->images.wall_image; break;
                case '0': current_image = game->images.floor_image; break;
                case 'C': current_image = game->images.collectible_image; break;
                case 'E': current_image = game->images.exit_image; break;
                case 'B': current_image = game->images.enemy_image; break;
                default: continue;
            }
            mlx_image_to_window(game->mlx, current_image, x * BLOCK_WIDTH, y * BLOCK_HEIGHT);
        }
    }

    // Render the player at the starting position
    mlx_image_to_window(game->mlx, game->images.player_image, game->player_x * BLOCK_WIDTH, game->player_y * BLOCK_HEIGHT);
}

void render_map_update(t_game *game) {
    mlx_image_t *current_image;

    // Clear the previous tile
    switch (game->map[game->prev_player_y][game->prev_player_x]) {
        case '1': current_image = game->images.wall_image; break;
        case '0': current_image = game->images.floor_image; break;
        case 'C': current_image = game->images.collectible_image; break;
        case 'E': current_image = game->images.exit_image; break;
        case 'B': current_image = game->images.enemy_image; break;
        default: current_image = game->images.floor_image; break; // Default to floor if unknown
    }
    mlx_image_to_window(game->mlx, current_image, game->prev_player_x * BLOCK_WIDTH, game->prev_player_y * BLOCK_HEIGHT);

    // Render the player at the new position
    mlx_image_to_window(game->mlx, game->images.player_image, game->player_x * BLOCK_WIDTH, game->player_y * BLOCK_HEIGHT);
}

