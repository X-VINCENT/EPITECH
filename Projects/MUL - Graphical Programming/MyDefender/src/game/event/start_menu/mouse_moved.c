/*
** EPITECH PROJECT, 2022
** Mouse Moved Start Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_start_menu(game_t *game)
{
    start_menu_t *menu = game->assets->start_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_play = sfSprite_getGlobalBounds(menu->play);
    sfFloatRect r_quit = sfSprite_getGlobalBounds(menu->quit);

    button_hover(menu->play, menu->clock, &r_play, coords);
    button_hover_little(menu->quit, menu->clock, &r_quit, coords);
}
