/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:54:21 by ovosmera          #+#    #+#             */
/*   Updated: 2024/12/15 18:34:14 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_exit_condition(t_game *g)
{
	if (g->map.grid[g->map.player_y][g->map.player_x] == 'E'
		&& g->map.collect_count == 0)
	{
		ft_printf("You won in %d moves!\n", g->moves + 1);
		cleanup(g);
		mlx_terminate(g->mlx);
		exit(0);
	}
}

static void	handle_enemy_and_collect(t_game *g, int nx, int ny)
{
	if (g->map.grid[ny][nx] == 'B')
	{
		ft_printf("You stepped on an enemy! You died.\n");
		cleanup(g);
		mlx_terminate(g->mlx);
		exit(0);
	}
	if (g->map.grid[ny][nx] == 'C')
		g->map.collect_count--;
}

static void	finalize_move(t_game *g, int nx, int ny)
{
	int		old_x;
	int		old_y;
	char	old_tile;

	old_x = g->map.player_x;
	old_y = g->map.player_y;
	handle_enemy_and_collect(g, nx, ny);
	old_tile = g->map.grid[old_y][old_x];
	g->moves++;
	if (g->map.grid[ny][nx] != 'E')
		g->map.grid[ny][nx] = 'P';
	g->map.player_x = nx;
	g->map.player_y = ny;
	if (old_tile != 'E')
		g->map.grid[old_y][old_x] = '0';
	ft_printf("Moves: %d\n", g->moves);
	check_exit_condition(g);
	render_map(g);
}

static void	move_player(t_game *g, int dx, int dy)
{
	int	nx;
	int	ny;

	nx = g->map.player_x + dx;
	ny = g->map.player_y + dy;
	if (g->map.grid[ny][nx] == '1')
		return ;
	finalize_move(g, nx, ny);
}

void	key_hook(mlx_key_data_t keydata, void *param)
{
	t_game	*g;

	g = (t_game *)param;
	if (keydata.action == MLX_PRESS)
	{
		if (keydata.key == MLX_KEY_ESCAPE)
		{
			cleanup(g);
			mlx_terminate(g->mlx);
			exit(0);
		}
		else if (keydata.key == MLX_KEY_W)
			move_player(g, 0, -1);
		else if (keydata.key == MLX_KEY_S)
			move_player(g, 0, 1);
		else if (keydata.key == MLX_KEY_A)
			move_player(g, -1, 0);
		else if (keydata.key == MLX_KEY_D)
			move_player(g, 1, 0);
	}
}
