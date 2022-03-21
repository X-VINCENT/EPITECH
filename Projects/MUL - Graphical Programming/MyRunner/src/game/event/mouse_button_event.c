/*
** EPITECH PROJECT, 2022
** Mouse Button Event for My RUnner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void mouse_button_home_menu(game_t *game)
{
    home_menu_t *h_m = game->assets->home_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect play_global_bounds = sfSprite_getGlobalBounds(h_m->play);
    sfFloatRect quit_global_bounds = sfSprite_getGlobalBounds(h_m->quit);

    if (!game)
        return;
    if (sfFloatRect_contains(&play_global_bounds, coords.x, coords.y)) {
        sfMusic_stop(h_m->music);
        sfSound_play(game->event->click_button);
        game->stage = 1;
    }
    if (sfFloatRect_contains(&quit_global_bounds, coords.x, coords.y)) {
        sfMusic_stop(h_m->music);
        sfSound_play(game->event->click_button);
        sfRenderWindow_close(game->window);
    }
}

void mouse_button_2_home_menu(game_t *game)
{
    home_menu_t *h_m = game->assets->home_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect mute_global_bounds = sfSprite_getGlobalBounds(h_m->mute);
    sfFloatRect settings_global_bounds = sfSprite_getGlobalBounds(
        h_m->settings);

    if (!game)
        return;
    if (sfFloatRect_contains(&mute_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        set_sounds_volume(game);
    }
    if (sfFloatRect_contains(&settings_global_bounds, coords.x, coords.y)) {
        game->last_stage = 0;
        game->stage = 3;
    }
}

void mouse_button_pause_menu(game_t *game)
{
    pause_menu_t *p_m = game->assets->pause_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect play_global_bounds = sfSprite_getGlobalBounds(p_m->play);
    sfFloatRect quit_global_bounds = sfSprite_getGlobalBounds(p_m->quit);
    sfFloatRect rs_global_bounds = sfSprite_getGlobalBounds(p_m->restart);

    if (sfFloatRect_contains(&play_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        game->stage = 1;
    }
    if (sfFloatRect_contains(&quit_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        sfRenderWindow_close(game->window);
    }
    if (sfFloatRect_contains(&rs_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        reset_game(game);
    }
}

void mouse_button_2_pause_menu(game_t *game)
{
    pause_menu_t *p_m = game->assets->pause_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect mute_global_bounds = sfSprite_getGlobalBounds(p_m->mute);
    sfFloatRect settings_global_bounds = sfSprite_getGlobalBounds(
        p_m->settings);

    if (!game)
        return;
    if (sfFloatRect_contains(&mute_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        set_sounds_volume(game);
    }
    if (sfFloatRect_contains(&settings_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        game->last_stage = 2;
        game->stage = 3;
    }
}

void mouse_button_settings_menu(game_t *game)
{
    settings_menu_t *settings_menu = game->assets->settings_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect back_global_bounds = sfSprite_getGlobalBounds(
        settings_menu->back);
    sfFloatRect res3_gb = sfSprite_getGlobalBounds(settings_menu->res_3);

    if (!game)
        return;
    if (sfFloatRect_contains(&back_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        game->stage = game->last_stage;
    }
    if (sfFloatRect_contains(&res3_gb, coords.x, coords.y))
        sfSound_play(game->event->click_button);
    set_res_settings_menu(game);
    set_fps_settings_menu(game);
}
