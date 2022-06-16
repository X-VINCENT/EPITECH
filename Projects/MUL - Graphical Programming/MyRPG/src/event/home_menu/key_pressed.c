/*
** EPITECH PROJECT, 2022
** Key pressed home menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void home_menu_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyReturn) {
        game->last_stage = game->stage;
        game->stage = GAME_STAGE;
    }
}
