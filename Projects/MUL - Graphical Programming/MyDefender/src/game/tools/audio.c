/*
** EPITECH PROJECT, 2022
** Audio Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void down_volume(game_t *game)
{
    if (sfMusic_getVolume(game->assets->start_menu->music) < 10) {
        mute_music(game->assets->start_menu->music);
        mute_music(game->assets->home_menu->music);
        mute_music(game->maps->michael_music);
    } else {
        set_offset_music(game->assets->start_menu->music, -10);
        set_offset_music(game->assets->home_menu->music, -10);
        set_offset_music(game->maps->michael_music, -10);
    }
}

void up_volume(game_t *game)
{
    if (sfMusic_getVolume(game->assets->start_menu->music) < 100) {
        set_offset_music(game->assets->start_menu->music, 10);
        set_offset_music(game->assets->home_menu->music, 10);
        set_offset_music(game->maps->michael_music, 10);
    }
}

void down_sounds(game_t *game)
{
    if (sfSound_getVolume(game->event->click) < 10) {
        mute_sound(game->assets->results_screen->win_sound);
        mute_sound(game->assets->results_screen->loose_sound);
        mute_sound(game->assets->sounds->plant);
        mute_sound(game->assets->sounds->transplanter);
        mute_sound(game->assets->sounds->score);
        mute_sound(game->assets->sounds->menu);
        mute_sound(game->event->click);
        mute_sound(game->maps->map1->zombie_death);
    } else {
        set_offset_sound(game->assets->results_screen->win_sound, -10);
        set_offset_sound(game->assets->results_screen->loose_sound, -10);
        set_offset_sound(game->assets->sounds->plant, -10);
        set_offset_sound(game->assets->sounds->transplanter, -10);
        set_offset_sound(game->assets->sounds->score, -10);
        set_offset_sound(game->assets->sounds->menu, -10);
        set_offset_sound(game->event->click, -10);
        set_offset_sound(game->maps->map1->zombie_death, -10);
    }
}

void up_sounds(game_t *game)
{
    if (sfSound_getVolume(game->event->click) < 100) {
        set_offset_sound(game->assets->results_screen->win_sound, 10);
        set_offset_sound(game->assets->results_screen->loose_sound, 10);
        set_offset_sound(game->assets->sounds->plant, 10);
        set_offset_sound(game->assets->sounds->transplanter, 10);
        set_offset_sound(game->assets->sounds->score, 10);
        set_offset_sound(game->assets->sounds->menu, 10);
        set_offset_sound(game->event->click, 10);
        set_offset_sound(game->maps->map1->zombie_death, 10);
    }
}

void stop_musics(game_t *game)
{
    sfMusic_stop(game->assets->start_menu->music);
    sfMusic_stop(game->assets->home_menu->music);
    sfMusic_stop(game->maps->michael_music);
}
