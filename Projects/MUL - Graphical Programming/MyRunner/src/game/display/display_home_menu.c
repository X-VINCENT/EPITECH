/*
** EPITECH PROJECT, 2021
** Display Home Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void display_home_menu(game_t *game)
{
    home_menu_t *home_menu = game->assets->home_menu;

    if (!game)
        return;
    sfRenderWindow_drawSprite(game->window, home_menu->bg, NULL);
    sfRenderWindow_drawText(game->window, home_menu->my_runner, NULL);
    sfRenderWindow_drawText(game->window, home_menu->best_score, NULL);
    sfRenderWindow_drawText(game->window, home_menu->creator, NULL);
    sfRenderWindow_drawSprite(game->window, home_menu->play, NULL);
    sfRenderWindow_drawSprite(game->window, home_menu->quit, NULL);
    sfRenderWindow_drawSprite(game->window, home_menu->settings, NULL);
    if (sfMusic_getVolume(game->assets->game_music) > 0.00)
        sfRenderWindow_drawSprite(game->window, home_menu->unmute, NULL);
    else
        sfRenderWindow_drawSprite(game->window, home_menu->mute, NULL);
}
