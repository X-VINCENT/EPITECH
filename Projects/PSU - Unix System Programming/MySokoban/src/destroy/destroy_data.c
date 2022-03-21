/*
** EPITECH PROJECT, 2022
** Destroy Data for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int destroy_data(data_t *data)
{
    if (!data)
        return ERROR;
    if (destroy_map_data(data->map_data) == ERROR)
        return ERROR;
    if (destroy_player(data->player) == ERROR)
        return ERROR;
    if (destroy_boxes(data->boxes) == ERROR)
        return ERROR;
    if (destroy_objectives(data->objectives) == ERROR)
        return ERROR;
    free(data);
    return SUCCESS;
}

int destroy_map_data(map_data_t *map_data)
{
    if (!map_data)
        return ERROR;
    if (map_data->map)
        free(map_data->map);
    if (map_data->col_sizes)
        free(map_data->col_sizes);
    free(map_data);
    return SUCCESS;
}

int destroy_player(player_t *player)
{
    if (!player)
        return ERROR;
    free(player);
    return SUCCESS;
}

int destroy_boxes(boxes_t **boxes)
{
    if (!boxes)
        return ERROR;
    for (int idx = 0; boxes[idx] != NULL; idx += 1)
        free(boxes[idx]);
    free(boxes);
    return SUCCESS;
}

int destroy_objectives(objectives_t **objectives)
{
    if (!objectives)
        return ERROR;
    for (int idx = 0; objectives[idx] != NULL; idx += 1)
        free(objectives[idx]);
    free(objectives);
    return SUCCESS;
}
