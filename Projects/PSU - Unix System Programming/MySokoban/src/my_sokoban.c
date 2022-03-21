/*
** EPITECH PROJECT, 2022
** My Sokoban for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int my_sokoban(const char *map_path)
{
    data_t *data = NULL;

    if (!map_path)
        return ERROR;
    if (!(data = init_data(map_path)))
        return ERROR;
    if (game(data, map_path) == ERROR)
        return ERROR;
    if (destroy_data(data) == ERROR)
        return ERROR;
    return SUCCESS;
}

int game(data_t *data, const char *map_path)
{
    if (!data)
        return ERROR;
    initscr();
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_RED);
    attron(COLOR_PAIR(1));
    keypad(stdscr, true);
    if (engine(data) == ERROR)
        return ERROR;
    return SUCCESS;
}
