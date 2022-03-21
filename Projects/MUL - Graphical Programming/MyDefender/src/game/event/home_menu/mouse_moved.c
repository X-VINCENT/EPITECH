/*
** EPITECH PROJECT, 2022
** Mouse Moved Home Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_moved_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    menu->maps_status = 0;
    menu->plants_status = 0;
    menu->stats_status = 0;
    menu->settings_status = 0;
    menu->howtoplay_status = 0;
    mouse_moved_cards_home_menu(game);
    mouse_moved_top_bar(game, HOME_STAGE);
}

void mouse_moved_cards_home_menu(game_t *game)
{
    home_menu_t *menu = game->assets->home_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_maps = sfSprite_getGlobalBounds(menu->maps_off);
    sfFloatRect r_plants = sfSprite_getGlobalBounds(menu->plants);
    sfFloatRect r_stats = sfSprite_getGlobalBounds(menu->stats_off);
    sfFloatRect r_settings = sfSprite_getGlobalBounds(menu->settings_off);
    sfFloatRect r_howtoplay = sfSprite_getGlobalBounds(menu->howtoplay_off);

    if (sfFloatRect_contains(&r_maps, coords.x, coords.y))
        menu->maps_status = 1;
    if (sfFloatRect_contains(&r_plants, coords.x, coords.y))
        menu->plants_status = 1;
    if (sfFloatRect_contains(&r_stats, coords.x, coords.y))
        menu->stats_status = 1;
    if (sfFloatRect_contains(&r_settings, coords.x, coords.y))
        menu->settings_status = 1;
    if (sfFloatRect_contains(&r_howtoplay, coords.x, coords.y))
        menu->howtoplay_status = 1;
}
