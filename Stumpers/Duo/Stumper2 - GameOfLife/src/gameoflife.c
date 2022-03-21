/*
** EPITECH PROJECT, 2022
** GameOfLife
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"

int gameoflife(const char *map_path, const int iterations)
{
    data_t *data = NULL;

    if (!map_path)
        return ERROR;
    if (!(data = init_data(map_path)))
        return ERROR;
    for (int idx = 0; idx != iterations; idx += 1) {
        if (!(data->map = clone_map(data->map_to_edit)))
            return ERROR;
        if (make_gameoflife(data) == ERROR)
            return ERROR;
        if (destroy_map(data->map) == ERROR)
            return ERROR;
    }
    if (print_map(data->map_to_edit) == ERROR)
        return ERROR;
    if (destroy_data(data) == ERROR)
        return ERROR;
    return SUCCESS;
}

int make_gameoflife(data_t *data)
{
    if (!data)
        return ERROR;
    for (int y = 0; data->map_to_edit[y] != NULL; y += 1)
        if (make_gameoflife_line(data, y) == ERROR)
            return ERROR;
    return SUCCESS;
}

int make_gameoflife_line(data_t *data, int y)
{
    int nb_neighbours = 0;

    if (!data || y < 0)
        return ERROR;
    for (int x = 0; data->map_to_edit[y][x] != '\0'; x += 1) {
        if ((nb_neighbours = get_nb_neighbours(data->map, x, y)) == -1)
            return ERROR;
        if (nb_neighbours == 3)
            data->map_to_edit[y][x] = 'X';
	if (nb_neighbours <= 1 || nb_neighbours >= 4)
            data->map_to_edit[y][x] = '.';
    }
    return SUCCESS;
}

int print_map(char **map)
{
    int idx = 0;

    if (!map)
        return ERROR;
    for (; map[idx + 1] != NULL; idx += 1)
        if (my_printf("%s\n", map[idx]) == ERROR)
            return ERROR;
    if (my_printf(map[idx]) == ERROR)
        return ERROR;
    return SUCCESS;
}
