/*
** EPITECH PROJECT, 2022
** Mouse Pressed Settings Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    mouse_pressed_bars_settings_menu(game);
    mouse_pressed_fps_settings_menu(game);
    mouse_pressed_res_settings_menu(game);
    mouse_pressed_top_bar(game, SETTINGS_STAGE);
}

void mouse_pressed_bars_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_volume_down = sfSprite_getGlobalBounds(
        menu->volume_bar_down);
    sfFloatRect r_volume_up = sfSprite_getGlobalBounds(menu->volume_bar_up);
    sfFloatRect r_sound_down = sfSprite_getGlobalBounds(menu->sound_bar_down);
    sfFloatRect r_sound_up = sfSprite_getGlobalBounds(menu->sound_bar_up);

    if (sfFloatRect_contains(&r_volume_down, coords.x, coords.y))
        down_volume(game);
    if (sfFloatRect_contains(&r_volume_up, coords.x, coords.y))
        up_volume(game);
    if (sfFloatRect_contains(&r_sound_down, coords.x, coords.y))
        down_sounds(game);
    if (sfFloatRect_contains(&r_sound_up, coords.x, coords.y))
        up_sounds(game);
}

void mouse_pressed_fps_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(menu->fps_left);
    sfFloatRect r_right = sfSprite_getGlobalBounds(menu->fps_right);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y))
        down_fps(game);
    if (sfFloatRect_contains(&r_right, coords.x, coords.y))
        up_fps(game);
}

void mouse_pressed_res_settings_menu(game_t *game)
{
    settings_menu_t *menu = game->assets->settings_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(menu->res_left);
    sfFloatRect r_right = sfSprite_getGlobalBounds(menu->res_right);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y))
        down_res(game);
    if (sfFloatRect_contains(&r_right, coords.x, coords.y))
        up_res(game);
}
