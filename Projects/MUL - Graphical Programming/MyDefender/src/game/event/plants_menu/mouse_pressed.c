/*
** EPITECH PROJECT, 2022
** Mouse Pressed Plants Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_plants_menu(game_t *game)
{
    plants_menu_t *menu = game->assets->plants_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    mouse_pressed_top_bar(game, PLANTS_STAGE);
}
