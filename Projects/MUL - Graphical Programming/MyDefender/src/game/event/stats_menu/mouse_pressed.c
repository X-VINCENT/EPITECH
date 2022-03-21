/*
** EPITECH PROJECT, 2022
** Mouse Pressed Stats Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_stats_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    mouse_pressed_top_bar(game, STATS_STAGE);
}
