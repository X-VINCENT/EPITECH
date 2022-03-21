/*
** EPITECH PROJECT, 2022
** Mouse Pressed Maps Menu for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void mouse_pressed_maps_menu(game_t *game)
{
    maps_menu_t *menu = game->assets->maps_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_map1 = sfSprite_getGlobalBounds(menu->maps_off[0]);

    if (sfFloatRect_contains(&r_map1, coords.x, coords.y)) {
        game->stage = MAP_1_STAGE;
        display_loading_screen(game);
        init_waves_map1(game);
        sfClock_restart(game->maps->clock_wave_text);
    }
    mouse_pressed_top_bar(game, MAPS_STAGE);
}
