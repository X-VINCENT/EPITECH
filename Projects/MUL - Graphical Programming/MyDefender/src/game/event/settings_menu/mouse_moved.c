/*
** EPITECH PROJECT, 2022
** Mouse Moved Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    mouse_moved_top_bar(game, SETTINGS_STAGE);
}
