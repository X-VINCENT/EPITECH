/*
** EPITECH PROJECT, 2022
** Mouse Moved Popup Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_popup_menu(game_t *game)
{
    popup_menu_t *menu = game->assets->popup_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_yes = sfSprite_getGlobalBounds(menu->yes_off);
    sfFloatRect r_no = sfSprite_getGlobalBounds(menu->no_off);

    if (sfFloatRect_contains(&r_yes, coords.x, coords.y))
        menu->hover_yes = 1;
    if (sfFloatRect_contains(&r_no, coords.x, coords.y))
        menu->hover_no = 1;
}
