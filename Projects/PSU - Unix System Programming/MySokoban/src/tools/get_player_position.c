/*
** EPITECH PROJECT, 2022
** Get Player Position for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int get_player_position(char **map, player_t *player)
{
    int returned_value = 0;

    if (!map || !player)
        return ERROR;
    for (int y = 0; map[y] != NULL; y += 1) {
        if ((returned_value = check_player_position(player, map, y)) == ERROR)
            return ERROR;
        if (returned_value = SUCCESS)
            return SUCCESS;
    }
    return SUCCESS;
}

int check_player_position(player_t *player, char **map, int y)
{
    if (!player || !map)
        return ERROR;
    for (int x = 0; map[y][x] != '\0'; x += 1) {
        if (map[y][x] == 'P') {
            player->x = x;
            player->y = y;
            return SUCCESS;
        }
    }
    return 1;
}
