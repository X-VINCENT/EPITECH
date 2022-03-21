/*
** EPITECH PROJECT, 2021
** Event for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void event(game_t *game)
{
    if (!game)
        return;
    if (sfRenderWindow_pollEvent(game->window, game->event->event)) {
        switch (game->event->event->type) {
            case sfEvtClosed:
                sfRenderWindow_close(game->window);
                break;
            case sfEvtKeyPressed:
                event_key_pressed(game);
                break;
            case sfEvtMouseButtonPressed:
                mouse_button_pressed(game);
                break;
            case sfEvtMouseMoved:
                mouse_moved(game);
            default:
                break;
        }
    }
}

void event_key_pressed(game_t *game)
{
    if (!game)
        return;
    switch (game->stage) {
        case 0:
            key_pressed_home_menu(game);
            break;
        case 1:
            key_pressed_runner(game);
            break;
        case 2:
            key_pressed_pause_menu(game);
            break;
        case 3:
            key_pressed_settings_menu(game);
            break;
        default:
            break;
    }
}

void mouse_button_pressed(game_t *game)
{
    switch (game->stage) {
        case 0:
            mouse_button_home_menu(game);
            mouse_button_2_home_menu(game);
            break;
        case 2:
            mouse_button_pause_menu(game);
            mouse_button_2_pause_menu(game);
            break;
        case 3:
            mouse_button_settings_menu(game);
            break;
        case 4:
            mouse_button_results_menu(game);
            mouse_button_2_results_menu(game);
            break;
        default:
            break;
    }
}

void mouse_moved(game_t *game)
{
    if (!game)
        return;
    switch (game->stage) {
        case 0:
            mouse_moved_home_menu(game);
            break;
        case 2:
            mouse_moved_pause_menu(game);
            break;
        case 3:
            mouse_moved_settings_menu(game);
            break;
        case 4:
            mouse_moved_results_menu(game);
            break;
        default:
            break;
    }
}
