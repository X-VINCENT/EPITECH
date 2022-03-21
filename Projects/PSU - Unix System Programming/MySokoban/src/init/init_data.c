/*
** EPITECH PROJECT, 2022
** Init Data for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

data_t *init_data(const char *map_path)
{
    data_t *data = NULL;

    if (!map_path)
        return NULL;
    if (!(data = malloc(sizeof(data_t))))
        return NULL;
    if (!(data->map_data = init_map_data(map_path)))
        return NULL;
    if (!(data->player = init_player(data->map_data->map)))
        return NULL;
    if (init_boxes(data) == ERROR)
        return NULL;
    if (init_objectives(data) == ERROR)
        return NULL;
    return data;
}

player_t *init_player(char **map)
{
    player_t *player = NULL;

    if (!map)
        return NULL;
    if (!(player = malloc(sizeof(player_t))))
        return NULL;
    if (get_player_position(map, player) == ERROR)
        return NULL;
    return player;
}
