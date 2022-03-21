/*
** EPITECH PROJECT, 2022
** Get Nb Objects for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int get_nb_objects(map_data_t *map_data, const char *buff)
{
    if (!map_data || !buff)
        return ERROR;
    map_data->nb_boxes = 0;
    map_data->nb_objectives = 0;
    for (int idx = 0; buff[idx] != '\0'; idx += 1) {
        if (buff[idx] == 'X')
            map_data->nb_boxes += 1;
        if (buff[idx] == 'O')
            map_data->nb_objectives += 1;
    }
    return SUCCESS;
}
