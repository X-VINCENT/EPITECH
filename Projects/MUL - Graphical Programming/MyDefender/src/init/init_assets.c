/*
** EPITECH PROJECT, 2022
** Init Assets for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void init_assets(game_t *game)
{
    if (!game)
        return;
    game->assets = malloc(sizeof(assets_t));
    init_cursor(game);
    init_start_menu(game);
    init_home_menu(game);
    init_maps_menu(game);
    init_plants_menu(game);
    init_stats_menu(game);
    init_settings_menu(game);
    init_howtoplay_menu(game);
    init_popup_menu(game);
    init_pause_menu(game);
    init_top_bar(game);
    init_bottom_gamebar(game);
    init_loading_screen(game);
    init_results_screen(game);
    init_sounds(game);
}

void init_cursor(game_t *game)
{
    const char path[] = "assets/pictures/icons/cursor_icon.png";
    sfIntRect rect = init_rect(0, 0, 64, 64);
    sfVector2f pos = init_pos(10, 10);
    sfVector2f scale = {1.00, 1.00};

    game->assets->cursor = create_sprite(path, rect, pos, scale);
}
