/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:19:42 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:26:01 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_args(int ac, char **av)
{
	int	len;

	if (ac != 2)
		error_msg("Usage: ./so_long maps/map.ber");
	len = (int)ft_strlen(av[1]);
	if (len < 4 || ft_strncmp(av[1] + len - 4, ".ber", 4) != 0)
		error_msg("Map file must have .ber extension");
}

int	main(int ac, char **av)
{
	t_game	game;

	check_args(ac, av);
	parse_map(av[1], &game.map);
	check_map_validity(&game.map);
	check_path(&game.map);
	init_game(&game);
	start_game(&game);
	mlx_loop(game.mlx);
	mlx_terminate(game.mlx);
	return (0);
}
