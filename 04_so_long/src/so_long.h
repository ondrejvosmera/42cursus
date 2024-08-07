/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:23:43 by ovosmera          #+#    #+#             */
/*   Updated: 2024/08/07 17:25:41 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "../lib/MLX42/include/MLX42/MLX42.h"
# include "../lib/libft/libft.h"

# define BLOCK_WIDTH 64
# define BLOCK_HEIGHT 64

typedef struct s_images
{
    mlx_texture_t *player_texture;
    mlx_image_t *player_image;
    mlx_texture_t *collectible_texture;
    mlx_image_t *collectible_image;
    mlx_texture_t *enemy_texture;
    mlx_image_t *enemy_image;
    mlx_texture_t *wall_texture;
    mlx_image_t *wall_image;
    mlx_texture_t *floor_texture;
    mlx_image_t *floor_image;
    mlx_texture_t *exit_texture;
    mlx_image_t *exit_image;
} t_images;

typedef struct s_game {
    mlx_t *mlx;
    void *win;
    t_images images;
    char **map;
    int player_x; // Player's x position
    int player_y; // Player's y position
    int prev_player_x; // Previous player's x position
    int prev_player_y; // Previous player's y position
    int collected; // Number of collected items
    int total_collectibles; // Total number of collectibles in the game
    int moves; // Number of moves made by the player
} t_game;

// Function prototypes
void setup_window(t_game *game);
void setup_textures(t_game *game);
void render_map_initial(t_game *game); // Render the entire map initially
void render_map_update(t_game *game);  // Update only the changed parts of the map
void setup_event_hooks(t_game *game);
void key_press(mlx_key_data_t key_data, void *param);
void error(void);
char **read_map(const char *filename, t_game *game);

#endif
