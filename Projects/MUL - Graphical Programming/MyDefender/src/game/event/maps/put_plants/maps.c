/*
** EPITECH PROJECT, 2022
** Put Plants on Maps for My Defender
** File description:
** Xavier VINCENT  - Max PEIXOTO
*/

#include "my_defender.h"

void put_plant_on_map(game_t *game)
{
    switch (game->stage) {
        case MAP_1_STAGE:
            put_plant_on_map1(game);
            break;
        default:
            break;
    }
}
