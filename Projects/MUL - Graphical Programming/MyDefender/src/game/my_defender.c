/*
** EPITECH PROJECT, 2021
** My Defender File for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

int my_defender(void)
{
    game_t *game = NULL;

    if (!(game = init_game()))
        return ERROR;
    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack);
        event(game);
        select_game_stage(game);
        if (game->popup == QUIT_POPUP)
            display_popup_menu(game);
        display_cursor(game);
        sfRenderWindow_display(game->window);
    }
    save_data(game);
    destroy_all(game);
    return SUCCESS;
}

void select_game_stage(game_t *game)
{
    if (!game)
        return;
    switch (game->stage) {
        case START_STAGE:
            display_start_menu(game);
            break;
        case HOME_STAGE:
            display_home_menu(game);
            break;
        case MAPS_STAGE:
            display_maps_menu(game);
            break;
        case PLANTS_STAGE:
            display_plants_menu(game);
            break;
        default:
            break;
    }
    select_game_stage_2(game);
}

void select_game_stage_2(game_t *game)
{
    switch (game->stage) {
        case STATS_STAGE:
            display_stats_menu(game);
            break;
        case HOWTOPLAY_STAGE:
            display_howtoplay_menu(game);
            break;
        case SETTINGS_STAGE:
            display_settings_menu(game);
            break;
        case PAUSE_STAGE:
            display_pause_menu(game);
        default:
            break;
    }
    select_game_stage_3(game);
}

void select_game_stage_3(game_t *game)
{
    switch (game->stage) {
        case MAP_1_STAGE:
            game->last_stage = MAP_1_STAGE;
            display_map_1(game);
            break;
        case RESULT_STAGE:
            display_results_screen(game);
        default:
            break;
    }
}

void display_cursor(game_t *game)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);

    if (!game)
        return;
    sfSprite_setPosition(game->assets->cursor, coords);
    sfRenderWindow_drawSprite(game->window, game->assets->cursor, NULL);
}
