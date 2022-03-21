/*
** EPITECH PROJECT, 2022
** Mouse Pressed Pause Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_pause_menu(game_t *game)
{
    pause_menu_t *menu = game->assets->pause_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_restart = sfSprite_getGlobalBounds(menu->buttons_off[1]);

    if (sfFloatRect_contains(&r_restart, coords.x, coords.y)) {
        display_loading_screen(game);
        if (game->last_stage == MAP_1_STAGE) {
            reset_data_map(game, game->maps->map1);
            init_waves_map1(game);
        }
        game->stage = game->last_stage;
        game->maps->money = START_MONEY;
        sfClock_restart(game->maps->clock_wave_text);
    }
    mouse_pressed_pause_menu_2(game);
    mouse_pressed_top_bar(game, PAUSE_STAGE);
}

void mouse_pressed_pause_menu_2(game_t *game)
{
    pause_menu_t *menu = game->assets->pause_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_resume = sfSprite_getGlobalBounds(menu->buttons_off[0]);
    sfFloatRect r_return = sfSprite_getGlobalBounds(menu->buttons_off[2]);

    if (sfFloatRect_contains(&r_resume, coords.x, coords.y)) {
        game->stage = game->last_stage;
        sfClock_restart(game->maps->clock_wave_text);
    }
    if (sfFloatRect_contains(&r_return, coords.x, coords.y)) {
        if (game->last_stage == MAP_1_STAGE)
            reset_data_map(game, game->maps->map1);
        game->stage = HOME_STAGE;
        game->maps->money = START_MONEY;
    }
}

void reset_data_map(game_t *game, map_t *map)
{
    destroy_plants(game, map->plants);
    init_plants_struct_map(map);
    destroy_waves(map->waves);
    map->current_wave = 0;
    game->stats->score = 0;
}
