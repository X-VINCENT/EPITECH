/*
** EPITECH PROJECT, 2022
** Mouse Pressed Results Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_results_screen(game_t *game)
{
    results_screen_t *screen = game->assets->results_screen;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
}
