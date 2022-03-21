/*
** EPITECH PROJECT, 2022
** Move Box for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

void move_box_up(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char box = map[y - 1][x];
    char next = map[y - 2][x];
    int idx_box = 0;

    if (!data)
        return;
    if ((idx_box = select_box(data, x, y - 1)) == -1)
        return;
    if (next != 'O') {
        map[y][x] = next;
        map[y - 1][x] = player;
        map[y - 2][x] = box;
    } else {
        map[y][x] = ' ';
        map[y - 1][x] = player;
        map[y - 2][x] = box;
    }
    data->boxes[idx_box]->y -= 1;
}

void move_box_down(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char box = map[y + 1][x];
    char next = map[y + 2][x];
    int idx_box = 0;

    if (!data)
        return;
    if ((idx_box = select_box(data, x, y + 1)) == -1)
        return;
    if (next != 'O') {
        map[y][x] = next;
        map[y + 1][x] = player;
        map[y + 2][x] = box;
    } else {
        map[y][x] = ' ';
        map[y + 1][x] = player;
        map[y + 2][x] = box;
    }
    data->boxes[idx_box]->y += 1;
}

void move_box_left(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char box = map[y][x - 1];
    char next = map[y][x - 2];
    int idx_box = 0;

    if (!data)
        return;
    if ((idx_box = select_box(data, x - 1, y)) == -1)
        return;
    if (next != 'O') {
        map[y][x] = next;
        map[y][x - 1] = player;
        map[y][x - 2] = box;
    } else {
        map[y][x] = ' ';
        map[y][x - 1] = player;
        map[y][x - 2] = box;
    }
    data->boxes[idx_box]->x -= 1;
}

void move_box_right(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char box = map[y][x + 1];
    char next = map[y][x + 2];
    int idx_box = 0;

    if (!data)
        return;
    if ((idx_box = select_box(data, x + 1, y)) == -1)
        return;
    if (next != 'O') {
        map[y][x] = next;
        map[y][x + 1] = player;
        map[y][x + 2] = box;
    } else {
        map[y][x] = ' ';
        map[y][x + 1] = player;
        map[y][x + 2] = box;
    }
    data->boxes[idx_box]->x += 1;
}

int select_box(data_t *data, int box_x, int box_y)
{
    if (!data)
        return -1;
    for (int idx = 0; data->boxes[idx] != NULL; idx += 1)
        if (data->boxes[idx]->x == box_x && data->boxes[idx]->y == box_y)
            return idx;
    return -1;
}
