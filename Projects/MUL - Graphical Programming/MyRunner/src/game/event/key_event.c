/*
** EPITECH PROJECT, 2022
** Key Event for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void key_pressed_home_menu(game_t *game)
{
    sfEvent *event = game->event->event;

    if (!game)
        return;
    if (event->key.code == sfKeyEscape)
        sfRenderWindow_close(game->window);
}

void key_pressed_runner(game_t *game)
{
    sfEvent *event = game->event->event;

    if (!game)
        return;
    if (event->key.code == sfKeyEscape) {
        sfMusic_pause(game->assets->game_music);
        sfSound_play(game->assets->pause_menu->open_pause_menu);
        game->stage = 2;
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->event->clock)) > 0.60) {
        if (event->key.code == sfKeySpace) {
            sfSound_play(game->assets->character->jump_sound);
            game->assets->character->jump = 1;
        }
        sfClock_restart(game->event->clock);
    }
}

void key_pressed_pause_menu(game_t *game)
{
    sfEvent *event = game->event->event;

    if (!game)
        return;
    if (event->key.code == sfKeyEscape)
        sfRenderWindow_close(game->window);
}

void key_pressed_settings_menu(game_t *game)
{
    sfEvent *event = game->event->event;

    if (!game)
        return;
    if (event->key.code == sfKeyEscape)
        game->stage = game->last_stage;
}
