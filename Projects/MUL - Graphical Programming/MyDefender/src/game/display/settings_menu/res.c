/*
** EPITECH PROJECT, 2022
** Display Res Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_res_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;

    switch (game->res) {
        case 480:
            sfRenderWindow_drawText(game->window, menu->res[0], NULL);
            break;
        case 720:
            sfRenderWindow_drawText(game->window, menu->res[1], NULL);
            break;
        case 1080:
            sfRenderWindow_drawText(game->window, menu->res[2], NULL);
            break;
        default:
            display_res_settings_menu_2(game);
            break;
    }
    sfRenderWindow_drawSprite(game->window, menu->res_left, NULL);
    sfRenderWindow_drawSprite(game->window, menu->res_right, NULL);
}

void display_res_settings_menu_2(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;

    switch (game->res) {
        case 1440:
            sfRenderWindow_drawText(game->window, menu->res[3], NULL);
            break;
        case 2160:
            sfRenderWindow_drawText(game->window, menu->res[4], NULL);
            break;
        default:
            break;
    }
}
