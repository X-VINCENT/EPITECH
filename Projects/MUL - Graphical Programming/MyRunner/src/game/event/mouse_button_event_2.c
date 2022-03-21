/*
** EPITECH PROJECT, 2022
** Mouse Button Event for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void mouse_button_results_menu(game_t *game)
{
    results_menu_t *r_m = game->assets->results_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect play_global_bounds = sfSprite_getGlobalBounds(r_m->play);
    sfFloatRect quit_global_bounds = sfSprite_getGlobalBounds(r_m->quit);

    if (!game)
        return;
    if (sfFloatRect_contains(&play_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        reset_game(game);
    }
    if (sfFloatRect_contains(&quit_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        sfRenderWindow_close(game->window);
    }
}

void mouse_button_2_results_menu(game_t *game)
{
    results_menu_t *r_m = game->assets->results_menu;
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfFloatRect mute_global_bounds = sfSprite_getGlobalBounds(r_m->mute);
    sfFloatRect settings_global_bounds = sfSprite_getGlobalBounds(
        r_m->settings);

    if (!game)
        return;
    if (sfFloatRect_contains(&mute_global_bounds, coords.x, coords.y)) {
        sfSound_play(game->event->click_button);
        set_sounds_volume(game);
    }
    if (sfFloatRect_contains(&settings_global_bounds, coords.x, coords.y)) {
        game->last_stage = 4;
        game->stage = 3;
    }
}
