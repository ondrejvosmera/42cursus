/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:19:42 by ovosmera          #+#    #+#             */
/*   Updated: 2024/04/30 16:46:57 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(void)
{
    mlx_t *mlx;

    mlx = mlx_init(800, 600, "So Long", false);
    if (!mlx)
    {
        error();
    }

    // Add a delay to simulate the program running for a short period
    usleep(3000000); // Delay for 3 seconds

    mlx_terminate(mlx); // Terminate the MLX42 instance

    return 0;
}

