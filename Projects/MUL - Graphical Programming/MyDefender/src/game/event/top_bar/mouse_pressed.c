/*
** EPITECH PROJECT, 2022
** Mouse Pressed Top Bar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_top_bar(game_t *game, int stage)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_home = sfSprite_getGlobalBounds(bar->home_on);
    sfFloatRect r_maps = sfSprite_getGlobalBounds(bar->maps_on);
    sfFloatRect r_plants = sfSprite_getGlobalBounds(bar->plants_on);
    sfFloatRect r_stats = sfSprite_getGlobalBounds(bar->stats_on);

    if (sfFloatRect_contains(&r_home, coords.x, coords.y))
        game->stage = HOME_STAGE;
    if (sfFloatRect_contains(&r_maps, coords.x, coords.y))
        game->stage = MAPS_STAGE;
    if (sfFloatRect_contains(&r_plants, coords.x, coords.y))
        game->stage = PLANTS_STAGE;
    if (sfFloatRect_contains(&r_stats, coords.x, coords.y))
        game->stage = STATS_STAGE;
    mouse_pressed_top_bar_2(game, game->stage);
}

void mouse_pressed_top_bar_2(game_t *game, int stage)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_howtoplay = sfSprite_getGlobalBounds(bar->howtoplay_on);
    sfFloatRect r_settings = sfSprite_getGlobalBounds(bar->settings_on);

    if (sfFloatRect_contains(&r_howtoplay, coords.x, coords.y))
        game->stage = HOWTOPLAY_STAGE;
    if (sfFloatRect_contains(&r_settings, coords.x, coords.y))
        game->stage = SETTINGS_STAGE;
}
