/*
** EPITECH PROJECT, 2022
** Display Map for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int display_map(data_t *data)
{
    int map_cols = 0;
    int map_rows = 0;

    if (!data || !data->map_data || !data->map_data->map)
        return ERROR;
    if (display_objectives(data) == ERROR)
        return ERROR;
    if (LINES < data->map_data->nb_lines ||
        COLS < data->map_data->longest_line) {
        mvprintw(LINES / 2, COLS / 2 - 12, "Please enlarge terminal.");
        return SUCCESS;
    }
    for (int idx = 0; idx <= data->map_data->nb_lines; idx += 1)
        mvprintw(LINES / 2 + idx - (data->map_data->nb_lines / 2),
            COLS / 2 - (data->map_data->longest_line / 2),
            data->map_data->map[idx]);
    move(LINES / 2  - (data->map_data->nb_lines / 2) + data->player->y,
        COLS / 2 - (data->map_data->longest_line / 2) + data->player->x);
    return SUCCESS;
}

int display_objectives(data_t *data)
{
    char **map = NULL;

    if (!data)
        return ERROR;
    map = data->map_data->map;
    for (int idx = 0; data->objectives[idx] != NULL; idx += 1) {
        if (map[data->objectives[idx]->y][data->objectives[idx]->x] != 'P' &&
            map[data->objectives[idx]->y][data->objectives[idx]->x] != 'X')
            map[data->objectives[idx]->y][data->objectives[idx]->x] = 'O';
    }
    return SUCCESS;
}
