/*
** EPITECH PROJECT, 2022
** Destroy for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

void destroy_all(game_t *game)
{
    if (!game)
        return;
    destroy_window(game->window);
    destroy_event(game->event);
    destroy_assets(game->assets);
    destroy_maps(game->maps);
    destroy_stats(game->stats);
    free(game);
}

void destroy_event(event_t *event)
{
    if (!event)
        return;
    free(event->event);
    destroy_sound(event->click);
    free(event);
}

void destroy_assets(assets_t *assets)
{
    if (!assets)
        return;
    destroy_sprite(assets->cursor);
    destroy_start_menu(assets->start_menu);
    destroy_home_menu(assets->home_menu);
    destroy_maps_menu(assets->maps_menu);
    destroy_plants_menu(assets->plants_menu);
    destroy_stats_menu(assets->stats_menu);
    destroy_howtoplay_menu(assets->howtoplay_menu);
    destroy_settings_menu(assets->settings_menu);
    destroy_popup_menu(assets->popup_menu);
    destroy_pause_menu(assets->pause_menu);
    destroy_top_bar(assets->top_bar);
    destroy_bottom_gamebar(assets->bottom_gamebar);
    destroy_loading_screen(assets->loading_screen);
    destroy_results_screen(assets->results_screen);
    destroy_sounds(assets->sounds);
    free(assets);
}

void destroy_maps(maps_t *maps)
{
    destroy_map(maps->map1);
    destroy_sprite(maps->sun);
    sfClock_destroy(maps->sun_clock);
    destroy_rectangle_shape(maps->info);
    destroy_text(maps->info_text_name);
    destroy_text(maps->info_text_damage);
    destroy_text(maps->info_text_level);
    destroy_music(maps->michael_music);
    destroy_text(maps->wave_text);
    sfClock_destroy(maps->clock_wave_text);
    free(maps);
}

void destroy_stats(stats_t *stats)
{
    sfClock_destroy(stats->time_playing_clock);
    free(stats);
}
