/*
** EPITECH PROJECT, 2022
** Sounds for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

void set_sounds_volume(game_t *game)
{
    if (sfSound_getVolume(game->event->click_button) == 100.00)
        set_min_volume(game);
    else
        set_max_volume(game);
}

void set_min_volume(game_t *game)
{
    sfMusic_setVolume(game->assets->home_menu->music, 0.00);
    sfMusic_setVolume(game->assets->game_music, 0.00);
    sfSound_setVolume(game->assets->character->jump_sound, 0.00);
    sfSound_setVolume(game->assets->pause_menu->open_pause_menu, 0.00);
    sfSound_setVolume(game->event->click_button, 0.00);
    sfSound_setVolume(game->assets->character->death, 0.00);
    sfSound_setVolume(game->assets->results_menu->loose_sound, 0.00);
    sfSound_setVolume(game->assets->results_menu->win_sound, 0.00);
    sfSound_setVolume(game->map->coin_sound, 0.00);
}

void set_max_volume(game_t *game)
{
    sfMusic_setVolume(game->assets->home_menu->music, 100.00);
    sfMusic_setVolume(game->assets->game_music, 100.00);
    sfSound_setVolume(game->assets->character->jump_sound, 100.00);
    sfSound_setVolume(game->assets->pause_menu->open_pause_menu, 100.00);
    sfSound_setVolume(game->event->click_button, 100.00);
    sfSound_setVolume(game->assets->character->death, 100.00);
    sfSound_setVolume(game->assets->results_menu->loose_sound, 100.00);
    sfSound_setVolume(game->assets->results_menu->win_sound, 100.00);
    sfSound_setVolume(game->map->coin_sound, 100.00);
}
