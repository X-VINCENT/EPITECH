/*
** EPITECH PROJECT, 2022
** Mouse Moved Maps Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_maps_menu(game_t *game)
{
    maps_menu_t *menu = game->assets->maps_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect rect;

    for (int idx = 0; menu->maps_off[idx] != NULL; idx += 1) {
        rect = sfSprite_getGlobalBounds(menu->maps_off[idx]);
        if (sfFloatRect_contains(&rect, coords.x, coords.y))
            menu->cards_status[idx] = 1;
        else
            menu->cards_status[idx] = 0;
    }
    mouse_moved_top_bar(game, MAPS_STAGE);
}
