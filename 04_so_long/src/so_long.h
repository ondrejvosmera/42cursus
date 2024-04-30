/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:23:43 by ovosmera          #+#    #+#             */
/*   Updated: 2024/04/30 16:29:07 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/MLX42/include/MLX42/MLX42.h"
# include "../lib/libft/libft.h"

typedef struct s_images
{
	mlx_texture_t	player_texture;
	mlx_image_t		player_image;
	mlx_texture_t	collectible_texture;
	mlx_image_t		collectible_image;
	mlx_texture_t	enemy_texture;
	mlx_image_t		enemy_image;
	mlx_texture_t	wall_texture;
	mlx_image_t		wall_image;
	mlx_texture_t	floor_texture;
	mlx_image_t		floor_image;
	mlx_texture_t	exit_texture;
	mlx_image_t		exit_image;
}	t_images;


// errors.c
void		error(void);

#endif
