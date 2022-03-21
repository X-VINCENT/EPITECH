/*
** EPITECH PROJECT, 2022
** Settings Menu for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void set_res_settings_menu(game_t *game)
{
    settings_menu_t *settings_menu = game->assets->settings_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect res1_gb = sfSprite_getGlobalBounds(settings_menu->res_1);
    sfFloatRect res2_gb = sfSprite_getGlobalBounds(settings_menu->res_2);
    sfFloatRect res3_gb = sfSprite_getGlobalBounds(settings_menu->res_3);
    sfVector2u res1 = {1280, 720};
    sfVector2u res2 = {1920, 1080};
    sfVector2u res3 = {3840, 2160};

    if (sfFloatRect_contains(&res1_gb, coords.x, coords.y) ||
        sfFloatRect_contains(&res2_gb, coords.x, coords.y))
        sfSound_play(game->event->click_button);
    if (sfFloatRect_contains(&res1_gb, coords.x, coords.y))
        sfRenderWindow_setSize(game->window, res1);
    if (sfFloatRect_contains(&res2_gb, coords.x, coords.y))
        sfRenderWindow_setSize(game->window, res2);
    if (sfFloatRect_contains(&res3_gb, coords.x, coords.y))
        sfRenderWindow_setSize(game->window, res3);
}

void set_fps_settings_menu(game_t *game)
{
    settings_menu_t *settings_menu = game->assets->settings_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect fps1_gb = sfSprite_getGlobalBounds(settings_menu->fps_1);
    sfFloatRect fps2_gb = sfSprite_getGlobalBounds(settings_menu->fps_2);
    sfFloatRect fps3_gb = sfSprite_getGlobalBounds(settings_menu->fps_3);

    if (!game)
        return;
    if (sfFloatRect_contains(&fps1_gb, coords.x, coords.y) ||
        sfFloatRect_contains(&fps2_gb, coords.x, coords.y) ||
        sfFloatRect_contains(&fps3_gb, coords.x, coords.y))
        sfSound_play(game->event->click_button);
    if (sfFloatRect_contains(&fps1_gb, coords.x, coords.y))
        sfRenderWindow_setFramerateLimit(game->window, 60);
    if (sfFloatRect_contains(&fps2_gb, coords.x, coords.y))
        sfRenderWindow_setFramerateLimit(game->window, 144);
    if (sfFloatRect_contains(&fps3_gb, coords.x, coords.y))
        sfRenderWindow_setFramerateLimit(game->window, 0);
}
