/*
** EPITECH PROJECT, 2022
** Destroy
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"

int destroy_map(char **map)
{
    if (!map)
        return ERROR;
    for (int idx = 0; map[idx] != NULL; idx += 1)
        free(map[idx]);
    free(map);
    return SUCCESS;
}

int destroy_data(data_t *data)
{
    if (!data)
        return ERROR;
    free(data->col_sizes);
    free(data);
    return SUCCESS;
}
