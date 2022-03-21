/*
** EPITECH PROJECT, 2022
** Mouse Moved Results Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_results_screen(game_t *game)
{
    results_screen_t *screen = game->assets->results_screen;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
}
