/*
** EPITECH PROJECT, 2022
** Test Get Player Position for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"
#include <criterion/criterion.h>

Test(get_player_position, NULL_1)
{
    cr_assert_eq(get_player_position(NULL, NULL), ERROR);
}

Test(get_player_position, NULL_2)
{
    data_t *data = init_data("tests/.map/.map1");

    cr_assert_eq(
        get_player_position(data->map_data->map, NULL), ERROR);
    destroy_data(data);
}

Test(get_player_position, BASIC)
{
    data_t *data = init_data("tests/.map/.map1");

    cr_assert_eq(
        get_player_position(data->map_data->map, data->player), SUCCESS);
    cr_assert_eq(data->player->x, 4);
    cr_assert_eq(data->player->y, 2);
    destroy_data(data);
}

Test(get_player_position, NO_PLAYER)
{
    player_t *player = malloc(sizeof(player_t));
    player->x = 0;
    player->y = 0;
    char *map[] = {
        "########",
        "#      #",
        "#      #",
        "#      #",
        "########",
        NULL};

    cr_assert_eq(get_player_position(map, player), SUCCESS);
    cr_assert_eq(player->x, 0);
    cr_assert_eq(player->y, 0);
}
