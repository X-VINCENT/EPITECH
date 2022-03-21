/*
** EPITECH PROJECT, 2022
** Money for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

int check_money(game_t *game)
{
    if (game->plant_selected == PEASHOOTER &&
        game->maps->money < PEASHOOTER_PRICE)
        return 0;
    if (game->plant_selected == SUNFLOWER &&
        game->maps->money < SUNFLOWER_PRICE)
        return 0;
    if (game->plant_selected == TORCHWOOD &&
        game->maps->money < TORCHWOOD_PRICE)
        return 0;
    if (game->plant_selected == MINE_POTATO &&
        game->maps->money < MINE_POTATO_PRICE)
        return 0;
    if (game->plant_selected == ICE_SHOOTER &&
        game->maps->money < ICE_SHOOTER_PRICE)
        return 0;
    return 1;
}
