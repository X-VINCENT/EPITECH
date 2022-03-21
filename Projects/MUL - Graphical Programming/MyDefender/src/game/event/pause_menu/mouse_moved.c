/*
** EPITECH PROJECT, 2022
** Mouse Moved Pause Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_pause_menu(game_t *game)
{
    mouse_moved_buttons_pause_menu(game);
    mouse_moved_top_bar(game, PAUSE_STAGE);
}

void mouse_moved_buttons_pause_menu(game_t *game)
{
    pause_menu_t *menu = game->assets->pause_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect rect;

    for (int idx = 0; menu->buttons_off[idx] != NULL; idx += 1) {
        rect = sfSprite_getGlobalBounds(menu->buttons_off[idx]);
        if (sfFloatRect_contains(&rect, coords.x, coords.y))
            menu->buttons_status[idx] = 1;
        else
            menu->buttons_status[idx] = 0;
    }
}
