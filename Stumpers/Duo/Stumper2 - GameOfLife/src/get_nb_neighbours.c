/*
** EPITECH PROJECT, 2022
** Check Neighbours
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"

int get_nb_neighbours(char **map, int x, int y)
{
    int nb_neighbours = 0;
    int returned_value = 0;

    if (!map || x < 0 || y < 0)
        return -1;
    if ((returned_value = get_nb_neighbours_top(
        map, x, y)) == -1)
        return -1;
    nb_neighbours += returned_value;
    if ((returned_value = get_nb_neighbours_sides(
        map, x, y)) == -1)
        return -1;
    nb_neighbours += returned_value;
    if ((returned_value = get_nb_neighbours_bottom(
        map, x, y)) == -1)
        return - 1;
    nb_neighbours += returned_value;
    return nb_neighbours;
}

int get_nb_neighbours_top(char **map, int x, int y)
{
    int nb_neighbours = 0;

    if (!map)
        return -1;
    if (y <= 0 || x < 0)
        return 0;
    if (map[y - 1][x] == 'X')
        nb_neighbours += 1;
    if (x > 0 && map[y - 1][x - 1] == 'X')
        nb_neighbours += 1;
    if (map[y - 1][x + 1] == 'X')
        nb_neighbours += 1;
    return nb_neighbours;
}

int get_nb_neighbours_sides(char **map, int x, int y)
{
    int nb_neighbours = 0;

    if (!map)
        return -1;
    if (y < 0 || x < 0)
        return 0;
    if (x > 0 && map[y][x - 1] == 'X')
        nb_neighbours += 1;
    if (map[y][x + 1] == 'X')
        nb_neighbours += 1;
    return nb_neighbours;
}

int get_nb_neighbours_bottom(char **map, int x, int y)
{
    int nb_neighbours = 0;

    if (!map)
        return -1;
    if (y < 0 || x < 0)
        return 0;
    if (map[y + 1] != NULL) {
        if (map[y + 1][x] == 'X')
            nb_neighbours += 1;
        if (x > 0 && map[y + 1][x - 1] == 'X')
            nb_neighbours += 1;
        if (map[y + 1][x + 1] == 'X')
            nb_neighbours += 1;
    }
    return nb_neighbours;
}
