/*
** EPITECH PROJECT, 2022
** Display Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;

    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    display_bars_settings_menu(game);
    display_fps_settings_menu(game);
    display_res_settings_menu(game);
    display_top_bar(game, SETTINGS_STAGE);
}
