/*
** EPITECH PROJECT, 2021
** Event 1 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

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
    if (game->popup == QUIT_POPUP)
        key_pressed_popup_menu(game);
    else
        switch (game->stage) {
            case START_STAGE:
                key_pressed_start_menu(game);
                break;
            case HOME_STAGE:
                key_pressed_home_menu(game);
                break;
            case MAPS_STAGE:
                key_pressed_maps_menu(game);
                break;
            default:
                event_key_pressed_2(game);
                break;
        }
}

void mouse_button_pressed(game_t *game)
{
    if (game->popup == QUIT_POPUP)
        mouse_pressed_popup_menu(game);
    else
        switch (game->stage) {
            case START_STAGE:
                mouse_pressed_start_menu(game);
                break;
            case HOME_STAGE:
                mouse_pressed_home_menu(game);
                break;
            case MAPS_STAGE:
                mouse_pressed_maps_menu(game);
                break;
            default:
                mouse_button_pressed_2(game);
                break;
        }
    sfSound_play(game->event->click);
}

void mouse_moved(game_t *game)
{
    if (game->popup == QUIT_POPUP)
        mouse_moved_popup_menu(game);
    else
        switch (game->stage) {
            case START_STAGE:
                mouse_moved_start_menu(game);
                break;
            case HOME_STAGE:
                mouse_moved_home_menu(game);
                break;
            case MAPS_STAGE:
                mouse_moved_maps_menu(game);
                break;
            default:
                mouse_moved_2(game);
                break;
        }
}
