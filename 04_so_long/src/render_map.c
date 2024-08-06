/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:07:25 by ovosmera          #+#    #+#             */
/*   Updated: 2024/08/06 15:50:25 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void render_map(t_game *game) {
    int x, y;
    mlx_image_t *current_image;

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
    // Render the player at the new position
    mlx_image_to_window(game->mlx, game->images.player_image, game->player_x * BLOCK_WIDTH, game->player_y * BLOCK_HEIGHT);
}
