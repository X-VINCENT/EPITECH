/*
** EPITECH PROJECT, 2022
** Init Header for My Defender
** File description:
** Xavier VINCENT
*/

#ifndef INIT_H_
    #define INIT_H_

    #include "my_defender.h"

// Bottom Gamebar
    // buttons.c
    void init_buttons_bottom_gamebar(game_t *game);

    // init.c
    void init_bottom_gamebar(game_t *game);

    // objects.c
    void init_objects_bottom_gamebar(game_t *game);

    // plants.c
    void init_plants_bottom_gamebar(game_t *game);

    // texts.c
    void init_texts_bottom_gamebar(game_t *game);
    void init_plants_texts_bottom_gamebar(game_t *game);

// Home Menu
    // cards.c
    void init_maps_home_menu(game_t *game);
    void init_plants_zombies_home_menu(game_t *game);
    void init_stats_home_menu(game_t *game);
    void init_settings_home_menu(game_t *game);
    void init_howtoplay_home_menu(game_t *game);

    // init.c
    void init_home_menu(game_t *game);
    void init_cards_home_menu(game_t *game);


// Howtoplay Menu
    // init.c
    void init_howtoplay_menu(game_t *game);

// Loading Screen
    // init.c
    void init_loading_screen(game_t *game);

// Maps
    // Waves
        // init.c
        void init_waves_map1(game_t *game);

        // map1.c
        wave_t *init_wave1_map1(game_t *game);
        wave_t *init_wave2_map1(game_t *game);
        wave_t *init_wave3_map1(game_t *game);
        wave_t *init_wave4_map1(game_t *game);
        wave_t *init_wave5_map1(game_t *game);

    // Zombies
        // init.c
        zombie_t *init_zombie_hugo(sfVector2f position);
        zombie_t *init_zombie_max(sfVector2f position);
        zombie_t *init_zombie_gautier(sfVector2f position);
        zombie_t *init_zombie_michael_jackson(sfVector2f position);

    // init_infos.c
    void init_infos(game_t *game);
    void init_texts_infos(game_t *game);

    // init_map.c
    map_t *init_map(const char *path);
    object_t **init_objects(char **map);
    object_t *create_object(char **map, int x, int y);
    object_t *create_object_2(object_t *object, char **map, int x, int y);
    plant_t **init_plants_struct_map(map_t *map);

    // init_score.c
    void init_score_map(map_t *map);

    // init_sun.c
    void init_sun(game_t *game);

    // init_texts.c
    void init_texts(game_t *game);

    // load_map.c
    int get_map_lines(const char *map_path);
    int *get_map_col_sizes(const char *map_path);
    char **load_map(const char *map_path, int nb_lines, int *col_sizes);

// Maps Menu
    // init.c
    void init_maps_menu(game_t *game);
    void init_cards_maps_on_menu(game_t *game);
    void init_cards_maps_off_menu(game_t *game);

// Pause Menu
    // init.c
    void init_pause_menu(game_t *game);
    void init_buttons_off_pause_menu(game_t *game);
    void init_buttons_on_pause_menu(game_t *game);

// Plants Menu
    // cards.c
    void init_cards_plants_menu(game_t *game);
    void init_plants_off_plants_menu(game_t *game);
    void init_plants_on_plants_menu(game_t *game);
    void init_zombies_off_plants_menu(game_t *game);
    void init_zombies_on_plants_menu(game_t *game);
    void init_plants_desc(game_t *game);

    // description.c
    void init_description_plants_menu(game_t *game);
    void init_plants_description_plants_menu(game_t *game);
    void init_zombies_description_plants_menu(game_t *game);

    // init.c
    void init_plants_menu(game_t *game);

// Popup Menu
    // init.c
    void init_popup_menu(game_t *game);
    void init_buttons_popup_menu(game_t *game);

// Results Screen
    void init_results_screen(game_t *game);
    void init_backgrounds_results_screen(game_t *game);
    void init_texts_results_screen(game_t *game);
    void init_sounds_results_screen(game_t *game);

// Settings Menu
    // init_fps.c
    void init_fps_settings_menu(game_t *game);
    void init_buttons_fps_settings_menu(game_t *game);

    // init_res.c
    void init_res_settings_menu(game_t *game);
    void init_buttons_res_settings_menu(game_t *game);

    // init_volume_bar.c
    void init_bars_settings_menu(game_t *game);
    void init_volume_bar_settings_menu(game_t *game);
    void init_sound_bar_settings_menu(game_t *game);

    // init.c
    void init_settings_menu(game_t *game);

// Start Menu
    // init.c
    void init_start_menu(game_t *game);
    void init_buttons_start_menu(game_t *game);

// Stats Menu
    // init.c
    void init_stats_menu(game_t *game);
    void init_texts_stats_menu(game_t *game);
    void init_texts_stats_menu_2(game_t *game);

// Top Bar
    // init.c
    void init_top_bar(game_t *game);
    void init_buttons_off_top_bar_1(game_t *game);
    void init_buttons_off_top_bar_2(game_t *game);
    void init_buttons_on_top_bar_1(game_t *game);
    void init_buttons_on_top_bar_2(game_t *game);

// init_assets.c
void init_assets(game_t *game);
void init_cursor(game_t *game);

// init_game.c
game_t *init_game(void);
void init_window(game_t *game);
void init_event(game_t *game);
int init_maps(game_t *game);

//init_sounds.c
void init_sounds(game_t *game);

// init_stats.c
void init_stats(game_t *game);
int get_value_from_file(const char path[]);

#endif /* !INIT_H_ */
