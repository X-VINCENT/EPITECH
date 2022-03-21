/*
** EPITECH PROJECT, 2022
** Display Fps Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_fps_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;

    switch (game->fps) {
        case 30:
            sfRenderWindow_drawText(game->window, menu->fps[0], NULL);
            break;
        case 60:
            sfRenderWindow_drawText(game->window, menu->fps[1], NULL);
            break;
        case 144:
            sfRenderWindow_drawText(game->window, menu->fps[2], NULL);
            break;
        default:
            display_fps_settings_menu_2(game);
            break;
    }
    sfRenderWindow_drawSprite(game->window, menu->fps_left, NULL);
    sfRenderWindow_drawSprite(game->window, menu->fps_right, NULL);
}

void display_fps_settings_menu_2(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;

    switch (game->fps) {
        case 240:
            sfRenderWindow_drawText(game->window, menu->fps[3], NULL);
            break;
        case 0:
            sfRenderWindow_drawText(game->window, menu->fps[4], NULL);
            break;
        default:
            break;
    }
}
