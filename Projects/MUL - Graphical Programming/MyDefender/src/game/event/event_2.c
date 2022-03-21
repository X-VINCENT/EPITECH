/*
** EPITECH PROJECT, 2021
** Event 2 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void event_key_pressed_2(game_t *game)
{
    switch (game->stage) {
        case PLANTS_STAGE:
            key_pressed_plants_menu(game);
            break;
        case STATS_STAGE:
            key_pressed_stats_menu(game);
            break;
        case HOWTOPLAY_STAGE:
            key_pressed_howtoplay_menu(game);
            break;
        case SETTINGS_STAGE:
            key_pressed_settings_menu(game);
            break;
        case PAUSE_STAGE:
            key_pressed_pause_menu(game);
            break;
        default:
            event_key_pressed_3(game);
            break;
    }
}

void mouse_button_pressed_2(game_t *game)
{
    switch (game->stage) {
        case PLANTS_STAGE:
            mouse_pressed_plants_menu(game);
            break;
        case STATS_STAGE:
            mouse_pressed_stats_menu(game);
            break;
        case HOWTOPLAY_STAGE:
            mouse_pressed_howtoplay_menu(game);
            break;
        case SETTINGS_STAGE:
            mouse_pressed_settings_menu(game);
            break;
        case PAUSE_STAGE:
            mouse_pressed_pause_menu(game);
            break;
        default:
            mouse_button_pressed_3(game);
            break;
    }
}

void mouse_moved_2(game_t *game)
{
    switch (game->stage) {
        case PLANTS_STAGE:
            mouse_moved_plants_menu(game);
            break;
        case STATS_STAGE:
            mouse_moved_stats_menu(game);
            break;
        case HOWTOPLAY_STAGE:
            mouse_moved_howtoplay_menu(game);
            break;
        case SETTINGS_STAGE:
            mouse_moved_settings_menu(game);
            break;
        case PAUSE_STAGE:
            mouse_moved_pause_menu(game);
            break;
        default:
            mouse_moved_3(game);
            break;
    }
}
