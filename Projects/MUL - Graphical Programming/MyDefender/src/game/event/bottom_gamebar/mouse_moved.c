/*
** EPITECH PROJECT, 2022
** Mouse Moved Bottom Gamebar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_bottom_gamebar(game_t *game)
{
    bottom_gamebar_t *bar = game->assets->bottom_gamebar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_speed = sfSprite_getGlobalBounds(bar->speed_button[0]);
    sfFloatRect r_pause = sfSprite_getGlobalBounds(bar->pause_button);

    button_hover(bar->speed_button[0], bar->clock, &r_speed, coords);
    button_hover(bar->speed_button[1], bar->clock, &r_speed, coords);
    button_hover(bar->pause_button, bar->clock, &r_pause, coords);
}
