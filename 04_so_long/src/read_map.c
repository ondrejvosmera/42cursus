/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:59:49 by ovosmera          #+#    #+#             */
/*   Updated: 2024/08/07 17:33:53 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char **read_map(const char *filename, t_game *game) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening map file");
        exit(EXIT_FAILURE);
    }

    char **map = NULL;
    size_t line_count = 0;
    size_t line_length = 0;
    char *line = NULL;
    ssize_t read;

    game->total_collectibles = 0;

    while ((read = getline(&line, &line_length, file)) != -1) {
        map = realloc(map, (line_count + 1) * sizeof(char *));
        map[line_count] = strdup(line);
        if (map[line_count][strlen(map[line_count]) - 1] == '\n') {
            map[line_count][strlen(map[line_count]) - 1] = '\0'; // Remove the newline character
        }
        for (size_t i = 0; i < strlen(map[line_count]); i++) {
            if (map[line_count][i] == 'P') {
                game->player_x = i;
                game->player_y = line_count;
            }
            if (map[line_count][i] == 'C') {
                game->total_collectibles++;
            }
        }
        line_count++;
    }
    map = realloc(map, (line_count + 1) * sizeof(char *));
    map[line_count] = NULL; // Null-terminate the array

    fclose(file);
    if (line) {
        free(line);
    }
    return map;
}

