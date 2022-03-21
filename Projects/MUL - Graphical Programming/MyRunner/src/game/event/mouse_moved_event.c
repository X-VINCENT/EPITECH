/*
** EPITECH PROJECT, 2022
** Mouse Moved Event for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void mouse_moved_home_menu(game_t *game)
{
    home_menu_t *h_m = game->assets->home_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect play_global_bounds = sfSprite_getGlobalBounds(h_m->play);
    sfFloatRect quit_global_bounds = sfSprite_getGlobalBounds(h_m->quit);
    sfFloatRect settings_global_bounds = sfSprite_getGlobalBounds(
        h_m->settings);

    if (!game)
        return;
    button_hover(h_m->play, h_m->clock, &play_global_bounds, coords);
    button_hover(h_m->quit, h_m->clock, &quit_global_bounds, coords);
    button_hover_little(
        h_m->settings, h_m->clock, &settings_global_bounds, coords);
}

void mouse_moved_pause_menu(game_t *game)
{
    pause_menu_t *p_m = game->assets->pause_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect play_global_bounds = sfSprite_getGlobalBounds(p_m->play);
    sfFloatRect quit_global_bounds = sfSprite_getGlobalBounds(p_m->quit);
    sfFloatRect restart_global_bounds = sfSprite_getGlobalBounds(
        p_m->restart);
    sfFloatRect settings_global_bounds = sfSprite_getGlobalBounds(
        p_m->settings);

    if (!game)
        return;
    button_hover(p_m->play, p_m->clock, &play_global_bounds, coords);
    button_hover(p_m->quit, p_m->clock, &quit_global_bounds, coords);
    button_hover(p_m->restart, p_m->clock, &restart_global_bounds, coords);
    button_hover_little(
        p_m->settings, p_m->clock, &settings_global_bounds, coords);
}

void mouse_moved_settings_menu(game_t *game)
{
    settings_menu_t *s_m = game->assets->settings_menu;
    sfVector2i m = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coord = sfRenderWindow_mapPixelToCoords(game->window, m, NULL);
    sfFloatRect res1_gb = sfSprite_getGlobalBounds(s_m->res_1);
    sfFloatRect res2_gb = sfSprite_getGlobalBounds(s_m->res_2);
    sfFloatRect res3_gb = sfSprite_getGlobalBounds(s_m->res_3);
    sfFloatRect fps1_gb = sfSprite_getGlobalBounds(s_m->fps_1);
    sfFloatRect fps2_gb = sfSprite_getGlobalBounds(s_m->fps_2);
    sfFloatRect fps3_gb = sfSprite_getGlobalBounds(s_m->fps_3);
    sfFloatRect back_gb = sfSprite_getGlobalBounds(s_m->back);

    if (!game)
        return;
    button_hover(s_m->res_1, s_m->clock, &res1_gb, coord);
    button_hover(s_m->res_2, s_m->clock, &res2_gb, coord);
    button_hover(s_m->res_3, s_m->clock, &res3_gb, coord);
    button_hover(s_m->fps_1, s_m->clock, &fps1_gb, coord);
    button_hover(s_m->fps_2, s_m->clock, &fps2_gb, coord);
    button_hover(s_m->fps_3, s_m->clock, &fps3_gb, coord);
    button_hover(s_m->back, s_m->clock, &back_gb, coord);
}

void mouse_moved_results_menu(game_t *game)
{
    results_menu_t *r_m = game->assets->results_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect play_global_bounds = sfSprite_getGlobalBounds(r_m->play);
    sfFloatRect quit_global_bounds = sfSprite_getGlobalBounds(r_m->quit);
    sfFloatRect settings_global_bounds = sfSprite_getGlobalBounds(
        r_m->settings);

    if (!game)
        return;
    button_hover(r_m->play, r_m->clock, &play_global_bounds, coords);
    button_hover(r_m->quit, r_m->clock, &quit_global_bounds, coords);
    button_hover_little(
        r_m->settings, r_m->clock, &settings_global_bounds, coords);
}
