/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:23:43 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:20:34 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../lib/MLX42/include/MLX42/MLX42.h"
# include <ft_printf.h>
# include "get_next_line.h"
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

typedef struct s_map
{
	char	**grid;
	int		width;
	int		height;
	int		collect_count;
	int		player_count;
	int		exit_count;
	int		player_x;
	int		player_y;
}	t_map;

typedef struct s_game
{
	mlx_t		*mlx;
	mlx_image_t	*wall_img;
	mlx_image_t	*floor_img;
	mlx_image_t	*player_img;
	mlx_image_t	*collect_img;
	mlx_image_t	*exit_img;
	mlx_image_t	*enemy_img;
	t_map		map;
	int			moves;
}	t_game;

/* Prototypes */
void	error_msg(char *msg);
void	free_map_grid(char **grid, int height);
void	parse_map(char *filename, t_map *map);
void	check_map_validity(t_map *map);
void	check_path(t_map *map);
int		is_rectangle(t_map *map);
int		is_closed(t_map *map);
int		valid_chars_counts(t_map *map);
void	init_game(t_game *game);
void	init_images(t_game *game);
void	start_game(t_game *game);
void	key_hook(mlx_key_data_t keydata, void *param);
void	destroy_hook(void *param);
void	render_map(t_game *game);
void	cleanup(t_game *game);

#endif
