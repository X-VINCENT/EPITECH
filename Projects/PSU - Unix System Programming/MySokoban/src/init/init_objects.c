/*
** EPITECH PROJECT, 2022
** Init Objects for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int init_boxes(data_t *data)
{
    int idx = 0;

    if (!data)
        return ERROR;
    data->boxes = malloc(sizeof(boxes_t *) * data->map_data->nb_boxes + 1);
    for (int y = 0; data->map_data->map[y] != NULL; y += 1)
        for (int x = 0; data->map_data->map[y][x] != '\0'; x += 1)
            check_boxes(data, x, y, &idx);
    return SUCCESS;
}

void check_boxes(data_t *data, int x, int y, int *idx)
{
    if (data->map_data->map[y][x] == 'X') {
        data->boxes[*idx] = malloc(sizeof(boxes_t));
        data->boxes[*idx]->x = x;
        data->boxes[*idx]->y = y;
        *idx += 1;
    }
}

int init_objectives(data_t *data)
{
    int idx = 0;

    if (!data)
        return ERROR;
    data->objectives = malloc(
        sizeof(objectives_t *) * data->map_data->nb_objectives + 1);
    for (int y = 0; data->map_data->map[y] != NULL; y += 1)
        for (int x = 0; data->map_data->map[y][x] != '\0'; x += 1)
            check_objectives(data, x, y, &idx);
    return SUCCESS;
}

void check_objectives(data_t *data, int x, int y, int *idx)
{
    if (data->map_data->map[y][x] == 'O') {
        data->objectives[*idx] = malloc(sizeof(objectives_t));
        data->objectives[*idx]->x = x;
        data->objectives[*idx]->y = y;
        *idx += 1;
    }
}
