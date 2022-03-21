/*
** EPITECH PROJECT, 2022
** Key Pressed Map1 for My Defender
** File description:
** Xavier VINCENT  - Max PEIXOTO
*/

#include "my_defender.h"

void key_pressed_map1(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyEscape)
        game->stage = PAUSE_STAGE;
    if (event->key.code == sfKeySpace) {
        if (game->show_areas == 1)
            game->show_areas = 0;
        else
            game->show_areas = 1;
    }
    key_pressed_bottom_gamebar(game);
}
