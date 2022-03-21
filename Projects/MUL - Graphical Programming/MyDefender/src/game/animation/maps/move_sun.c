/*
** EPITECH PROJECT, 2022
** Move Sun for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void move_sun(game_t *game)
{
    sfVector2f offset = {0.00, 1.50 * game->speed};
    sfVector2f new_pos = {rand() % 1700 + 100, -500};

    if (time_elapsed(game->maps->sun_clock) > 0.01 / game->speed) {
        sfSprite_move(game->maps->sun, offset);
        sfClock_restart(game->maps->sun_clock);
    }
    if (sfSprite_getPosition(game->maps->sun).y >= 864)
        sfSprite_setPosition(game->maps->sun, new_pos);
}
