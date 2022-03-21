/*
** EPITECH PROJECT, 2022
** Key Pressed Start Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void key_pressed_start_menu(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyEscape) {
        sfClock_restart(game->assets->popup_menu->clock);
        game->popup = QUIT_POPUP;
    }
    if (event->key.code == sfKeyReturn) {
        sfMusic_pause(game->assets->start_menu->music);
        game->stage = HOME_STAGE;
    }
}
