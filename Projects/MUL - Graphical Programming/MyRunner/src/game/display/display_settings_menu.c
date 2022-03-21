/*
** EPITECH PROJECT, 2022
** Display Settings Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void display_settings_menu(game_t *game)
{
    settings_menu_t *settings_menu = game->assets->settings_menu;

    if (!game)
        return;
    sfRenderWindow_drawSprite(game->window, settings_menu->bg, NULL);
    sfRenderWindow_drawText(game->window, settings_menu->text_settings, NULL);
    sfRenderWindow_drawText(game->window, settings_menu->text_res, NULL);
    sfRenderWindow_drawSprite(game->window, settings_menu->res_1, NULL);
    sfRenderWindow_drawSprite(game->window, settings_menu->res_2, NULL);
    sfRenderWindow_drawSprite(game->window, settings_menu->res_3, NULL);
    sfRenderWindow_drawText(game->window, settings_menu->text_fps, NULL);
    sfRenderWindow_drawSprite(game->window, settings_menu->fps_1, NULL);
    sfRenderWindow_drawSprite(game->window, settings_menu->fps_2, NULL);
    sfRenderWindow_drawSprite(game->window, settings_menu->fps_3, NULL);
    sfRenderWindow_drawSprite(game->window, settings_menu->back, NULL);
}
