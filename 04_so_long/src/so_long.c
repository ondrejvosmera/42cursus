/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:19:42 by ovosmera          #+#    #+#             */
/*   Updated: 2024/08/06 15:39:50 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void setup_window(t_game *game) {
    game->mlx = mlx_init(800, 600, "So Long", false);
    if (!game->mlx) {
        error();
    }
}

void key_press(mlx_key_data_t key_data, void *param) {
    t_game *game = param;
    int new_x = game->player_x;
    int new_y = game->player_y;

    if (key_data.key == MLX_KEY_ESCAPE && key_data.action == MLX_PRESS) {
        mlx_close_window(game->mlx);
        exit(EXIT_SUCCESS);
    }
    else if (key_data.key == MLX_KEY_W && key_data.action == MLX_PRESS)
        new_y--;
    else if (key_data.key == MLX_KEY_S && key_data.action == MLX_PRESS)
        new_y++;
    else if (key_data.key == MLX_KEY_A && key_data.action == MLX_PRESS)
        new_x--;
    else if (key_data.key == MLX_KEY_D && key_data.action == MLX_PRESS)
        new_x++;

    if (game->map[new_y][new_x] != '1') { // Check for walls
        if (game->map[new_y][new_x] == 'C') {
            game->collected++;
            game->map[new_y][new_x] = '0';
        }
        if (game->map[new_y][new_x] == 'E' && game->collected == game->total_collectibles) {
            printf("You win!\n");
            mlx_close_window(game->mlx);
            exit(EXIT_SUCCESS);
        }
        game->player_x = new_x;
        game->player_y = new_y;
        game->moves++;
        render_map(game);  // Pass the game object
    }
}

void setup_event_hooks(t_game *game) {
    mlx_key_hook(game->mlx, key_press, game);
}

int main(int argc, char **argv) {
    t_game game;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <map_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    setup_window(&game);
    setup_textures(&game);

    game.map = read_map(argv[1], &game);
    if (!game.map) {
        fprintf(stderr, "Failed to load map.\n");
        return EXIT_FAILURE;
    }

    game.collected = 0;
    game.moves = 0;
    render_map(&game);  // Initial render
    setup_event_hooks(&game);

    mlx_loop(game.mlx); // Start the MLX event loop
    return 0;
}
