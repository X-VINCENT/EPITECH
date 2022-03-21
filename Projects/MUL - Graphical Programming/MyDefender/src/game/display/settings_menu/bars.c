/*
** EPITECH PROJECT, 2022
** Display Bars Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void display_bars_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;

    if (!(sfMusic_getVolume(game->assets->home_menu->music) < 10))
        for (int idx = 0; idx * 10 < sfMusic_getVolume(
            game->assets->home_menu->music) && idx < 10; idx += 1)
            sfRenderWindow_drawSprite(
                game->window, menu->volume_bar[idx], NULL);
    sfRenderWindow_drawSprite(game->window, menu->volume_bar_down, NULL);
    sfRenderWindow_drawSprite(game->window, menu->volume_bar_up, NULL);
    if (!(sfSound_getVolume(game->event->click) < 10))
        for (int idx = 0; idx * 10 < sfSound_getVolume(
            game->event->click) && idx < 10; idx += 1)
            sfRenderWindow_drawSprite(
                game->window, menu->sound_bar[idx], NULL);
    sfRenderWindow_drawSprite(game->window, menu->sound_bar_down, NULL);
    sfRenderWindow_drawSprite(game->window, menu->sound_bar_up, NULL);
}
