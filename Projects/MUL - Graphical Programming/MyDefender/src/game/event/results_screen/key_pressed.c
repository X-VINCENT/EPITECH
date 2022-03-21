/*
** EPITECH PROJECT, 2022
** Key Pressed Results Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void key_pressed_results_screen(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyReturn)
        game->stage = HOME_STAGE;
}
