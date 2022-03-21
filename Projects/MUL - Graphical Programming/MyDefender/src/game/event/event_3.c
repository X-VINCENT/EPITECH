/*
** EPITECH PROJECT, 2021
** Event 3 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void event_key_pressed_3(game_t *game)
{
    switch (game->stage) {
        case MAP_1_STAGE:
            key_pressed_map1(game);
        case RESULT_STAGE:
            key_pressed_results_screen(game);
        default:
            break;
    }
}

void mouse_button_pressed_3(game_t *game)
{
    switch (game->stage) {
        case MAP_1_STAGE:
            mouse_pressed_map1(game);
        case RESULT_STAGE:
            mouse_pressed_results_screen(game);
        default:
            break;
    }
}

void mouse_moved_3(game_t *game)
{
    switch (game->stage) {
        case MAP_1_STAGE:
            mouse_moved_map1(game);
        case RESULT_STAGE:
            mouse_moved_results_screen(game);
        default:
            break;
    }
}
