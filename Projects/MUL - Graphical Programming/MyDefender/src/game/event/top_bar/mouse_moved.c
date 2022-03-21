/*
** EPITECH PROJECT, 2022
** Mouse Moved Top Bar for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_top_bar(game_t *game, int stage)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_home_on = sfSprite_getGlobalBounds(bar->home_on);
    sfFloatRect r_home_off = sfSprite_getGlobalBounds(bar->home_off);
    sfFloatRect r_maps_on = sfSprite_getGlobalBounds(bar->maps_on);
    sfFloatRect r_maps_off = sfSprite_getGlobalBounds(bar->maps_off);

    if (stage == HOME_STAGE)
        button_hover(bar->home_on, bar->clock, &r_home_on, coords);
    else
        button_hover(bar->home_off, bar->clock, &r_home_off, coords);
    if (stage ==  MAPS_STAGE)
        button_hover(bar->maps_on, bar->clock, &r_maps_on, coords);
    else
        button_hover(bar->maps_off, bar->clock, &r_maps_off, coords);
    mouse_moved_top_bar_2(game, stage);
    mouse_moved_top_bar_3(game, stage);
}

void mouse_moved_top_bar_2(game_t *game, int stage)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_plants_on = sfSprite_getGlobalBounds(bar->plants_on);
    sfFloatRect r_plants_off = sfSprite_getGlobalBounds(bar->plants_off);
    sfFloatRect r_stats_on = sfSprite_getGlobalBounds(bar->stats_on);
    sfFloatRect r_stats_off = sfSprite_getGlobalBounds(bar->stats_off);

    if (stage == PLANTS_STAGE)
        button_hover(bar->plants_on, bar->clock, &r_plants_on, coords);
    else
        button_hover(bar->plants_off, bar->clock, &r_plants_off, coords);
    if (stage == STATS_STAGE)
        button_hover(bar->stats_on, bar->clock, &r_stats_on, coords);
    else
        button_hover(bar->stats_off, bar->clock, &r_stats_off, coords);
}

void mouse_moved_top_bar_3(game_t *game, int stage)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_htp_on = sfSprite_getGlobalBounds(bar->howtoplay_on);
    sfFloatRect r_htp_off = sfSprite_getGlobalBounds(bar->howtoplay_off);
    sfFloatRect r_settings_on = sfSprite_getGlobalBounds(bar->settings_on);
    sfFloatRect r_settings_off = sfSprite_getGlobalBounds(bar->settings_off);

    if (stage == HOWTOPLAY_STAGE)
        button_hover(bar->howtoplay_on, bar->clock, &r_htp_on, coords);
    else
        button_hover(bar->howtoplay_off, bar->clock, &r_htp_off, coords);
    if (stage == SETTINGS_STAGE)
        button_hover(bar->settings_on, bar->clock, &r_settings_on, coords);
    else
        button_hover(bar->settings_off, bar->clock, &r_settings_off, coords);
}
