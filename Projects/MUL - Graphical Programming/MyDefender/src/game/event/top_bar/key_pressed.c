/*
** EPITECH PROJECT, 2022
** Key Pressed Top Bar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void key_pressed_top_bar(game_t *game, int stage)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyRight)
        game->stage += 1;
    if (event->key.code == sfKeyLeft)
        game->stage -= 1;
    if (game->stage > MAX_STAGE)
        game->stage = 1;
    if (game->stage < 1)
        game->stage = MAX_STAGE;
}
