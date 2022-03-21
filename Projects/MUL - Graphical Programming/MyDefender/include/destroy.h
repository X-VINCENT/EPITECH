/*
** EPITECH PROJECT, 2022
** Destroy Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#ifndef DESTROY_H_
    #define DESTROY_H_

    #include "my_defender.h"

// Bottom Gamebar
    // destroy.c
    void destroy_bottom_gamebar(bottom_gamebar_t *bar);

// Home Menu
    // destroy.c
    void destroy_home_menu(home_menu_t *menu);
    void destroy_cards_home_menu(home_menu_t *menu);

// Howtoplay Menu
    // destroy.c
    void destroy_howtoplay_menu(howtoplay_menu_t *menu);

// Loading Screen
    void destroy_loading_screen(loading_screen_t *screen);

// Maps
    // destroy.c
    void destroy_map(map_t *map);

    // plants.c
    void destroy_plants_struct(plant_t **plants);
    void destroy_plants(game_t *game, plant_t **plants);

    // score.c
    void destroy_score(score_t *score);

    // waves.c
    void destroy_waves(wave_t **waves);
    void destroy_wave(wave_t *wave);

    // zombies.c
    void destroy_zombie(zombie_t *zombie);

// Maps Menu
    // destroy.c
    void destroy_maps_menu(maps_menu_t *menu);

// Pause Menu
    // destroy.c
    void destroy_pause_menu(pause_menu_t *menu);
    void destroy_buttons_pause_menu(pause_menu_t *menu);

// Plants Menu
    // destroy.c
    void destroy_plants_menu(plants_menu_t *menu);
    void destroy_cards_plants_menu(plants_menu_t *menu);

// Popup Menu
    // destroy.c
    void destroy_popup_menu(popup_menu_t *menu);

// Results Screen
    // destroy.c
    void destroy_results_screen(results_screen_t *screen);

// Settings Menu
    // destroy.c
    void destroy_settings_menu(settings_menu_t *menu);
    void destroy_bars_settings_menu(settings_menu_t *menu);
    void destroy_fps_settings_menu(settings_menu_t *menu);
    void destroy_res_settings_menu(settings_menu_t *menu);

// Start Menu
    // destroy.c
    void destroy_start_menu(start_menu_t *menu);

// Stats menu
    // destroy.c
    void destroy_stats_menu(stats_menu_t *menu);

// Top Bar
    // destroy.c
    void destroy_top_bar(top_bar_t *bar);

// destroy.c
void destroy_all(game_t *game);
void destroy_event(event_t *event);
void destroy_assets(assets_t *assets);
void destroy_maps(maps_t *maps);
void destroy_stats(stats_t *stats);
void destroy_sounds(sounds_t *sounds);

#endif /* !DESTROY_H_ */
