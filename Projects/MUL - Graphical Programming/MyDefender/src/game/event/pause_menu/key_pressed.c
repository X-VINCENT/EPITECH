/*
** EPITECH PROJECT, 2022
** Key Pressed Pause Menu for My Defender
** File description:
** Xavier VINCENT  -  Max PEIXOTO
*/

#include "my_defender.h"

void key_pressed_pause_menu(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyEscape && game->popup == OFF_POPUP)
        game->popup = QUIT_POPUP;
    key_pressed_top_bar(game, PAUSE_STAGE);
}
