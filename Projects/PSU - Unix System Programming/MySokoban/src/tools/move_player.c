/*
** EPITECH PROJECT, 2022
** Move Player for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

void move_player(data_t *data, const int input)
{
    char **map = data->map_data->map;
    int x = data->player->x;
    int y = data->player->y;
    char tmp = map[y][x];

    if (x > 0 && x < data->map_data->col_sizes[y] &&
        y > 0 && y < data->map_data->nb_lines) {
        if (input == KEY_UP)
            move_player_up(data, x, y);
        if (input == KEY_DOWN)
            move_player_down(data, x, y);
        if (input == KEY_LEFT)
            move_player_left(data, x, y);
        if (input == KEY_RIGHT)
            move_player_right(data, x, y);
    }
}

void move_player_up(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char next = map[y - 1][x];

    if (!data)
        return;
    if (next == '#' || (next == 'X' && (map[y - 2][x] == '#' ||
        map[y - 2][x] == 'X')))
        return;
    if (next == 'X')
        move_box_up(data, x, y);
    else if (next == 'O') {
        map[y][x] = ' ';
        map[y - 1][x] = player;
    } else {
        map[y][x] = next;
        map[y - 1][x] = player;
    }
    data->player->y -= 1;
}

void move_player_down(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char next = map[y + 1][x];

    if (!data)
        return;
    if (next == '#' || (next == 'X' && (map[y + 2][x] == '#' ||
        map[y + 2][x] == 'X')))
        return;
    if (next == 'X')
        move_box_down(data, x, y);
    else if (next == 'O') {
        map[y][x] = ' ';
        map[y + 1][x] = player;
    } else {
        map[y][x] = next;
        map[y + 1][x] = player;
    }
    data->player->y += 1;
}

void move_player_left(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char next = map[y][x - 1];

    if (!data)
        return;
    if (next == '#' || (next == 'X' && (map[y][x - 2] == '#' ||
        map[y][x - 2] == 'X')))
        return;
    if (next == 'X')
        move_box_left(data, x, y);
    else if (next == 'O') {
        map[y][x] = ' ';
        map[y][x - 1] = player;
    } else {
        map[y][x] = next;
        map[y][x - 1] = player;
    }
    data->player->x -= 1;
}

void move_player_right(data_t *data, int x, int y)
{
    char **map = data->map_data->map;
    char player = map[y][x];
    char next = map[y][x + 1];

    if (!data)
        return;
    if (next == '#' || (next == 'X' && (map[y][x + 2] == '#' ||
        map[y][x + 2] == 'X')))
        return;
    if (next == 'X')
        move_box_right(data, x, y);
    else if (next == 'O') {
        map[y][x] = ' ';
        map[y][x + 1] = player;
    } else {
        map[y][x] = next;
        map[y][x + 1] = player;
    }
    data->player->x += 1;
}
