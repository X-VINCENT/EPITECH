/*
** EPITECH PROJECT, 2022
** Key Pressed Popup Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void key_pressed_popup_menu(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyEscape &&
        time_elapsed(game->assets->popup_menu->clock) > 0.5)
        game->popup = OFF_POPUP;
    if (event->key.code == sfKeyReturn)
        sfRenderWindow_close(game->window);
}
