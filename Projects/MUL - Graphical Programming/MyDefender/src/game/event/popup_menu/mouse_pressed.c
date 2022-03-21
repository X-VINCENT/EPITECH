/*
** EPITECH PROJECT, 2022
** Mouse Pressed Popup Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_popup_menu(game_t *game)
{
    popup_menu_t *menu = game->assets->popup_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_yes = sfSprite_getGlobalBounds(menu->yes_on);
    sfFloatRect r_no = sfSprite_getGlobalBounds(menu->no_on);

    if (sfFloatRect_contains(&r_yes, coords.x, coords.y))
        sfRenderWindow_close(game->window);
    if (sfFloatRect_contains(&r_no, coords.x, coords.y))
        game->popup = OFF_POPUP;
}
