/*
** EPITECH PROJECT, 2022
** Get Nb Blocked Boxes for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int get_nb_blocked_boxes(data_t *data)
{
    char **map = NULL;
    boxes_t **boxes = NULL;
    int nb_blocked_boxes = 0;
    int x = 0;
    int y = 0;

    if (!data)
        return -1;
    map = data->map_data->map;
    boxes = data->boxes;
    for (int idx = 0; boxes[idx] != NULL; idx += 1) {
        x = boxes[idx]->x;
        y = boxes[idx]->y;
        if ((map[y][x - 1] == '#' && map[y - 1][x] == '#') ||
            (map[y][x + 1] == '#' && map[y + 1][x] == '#') ||
            (map[y][x - 1] == '#' && map[y + 1][x] == '#') ||
            (map[y][x + 1] == '#' && map[y - 1][x] == '#'))
            nb_blocked_boxes += 1;
    }
    return nb_blocked_boxes;
}
