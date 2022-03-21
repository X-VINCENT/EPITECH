/*
** EPITECH PROJECT, 2022
** Display Loading Screen for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_loading_screen(game_t *game)
{
    loading_screen_t *screen = game->assets->loading_screen;

    sfRenderWindow_clear(game->window, sfBlack);
    sfRenderWindow_drawSprite(game->window, screen->bg, NULL);
    sfRenderWindow_display(game->window);
}
