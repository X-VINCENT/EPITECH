/*
** EPITECH PROJECT, 2022
** Mouse Pressed Start Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_start_menu(game_t *game)
{
    start_menu_t *menu = game->assets->start_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_play = sfSprite_getGlobalBounds(menu->play);
    sfFloatRect r_quit = sfSprite_getGlobalBounds(menu->quit);

    if (sfFloatRect_contains(&r_play, coords.x, coords.y))
        game->stage = HOME_STAGE;
    if (sfFloatRect_contains(&r_quit, coords.x, coords.y))
        sfRenderWindow_close(game->window);
}
