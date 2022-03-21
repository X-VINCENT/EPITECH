/*
** EPITECH PROJECT, 2022
** Display Buttons Pause Menu for My Defender
** File description:
** Xavier VINCENT  - Max PEIXOTO
*/

#include "my_defender.h"

void display_buttons_pause_menu(game_t *game)
{
    pause_menu_t *menu = game->assets->pause_menu;

    for (int idx = 0; menu->buttons_off[idx] != NULL; idx += 1) {
        if (menu->buttons_status[idx] == 1) {
            sfRenderWindow_drawSprite(
                game->window, menu->buttons_on[idx], NULL);
        } else
            sfRenderWindow_drawSprite(
                game->window, menu->buttons_off[idx], NULL);
    }
}
