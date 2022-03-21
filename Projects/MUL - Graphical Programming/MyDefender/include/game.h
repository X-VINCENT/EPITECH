/*
** EPITECH PROJECT, 2022
** Game Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#ifndef GAME_H_
    #define GAME_H_

    #include "my_defender.h"

// Animation
    // Maps
        // Map1
            // move_zombies.c
            void move_zombies_map1(game_t *game, int idx_wave);
            void move_zombie_map1(game_t *game, int idx, wave_t *wave,
                sfVector2f offset);

        // animate_plants.c
        void animate_plants(game_t *game, map_t *map);
        void check_plant_to_anim_1(game_t *game, map_t *map, int idx);
        void check_plant_to_anim_2(game_t *game, map_t *map, int idx);

        // animate_zombies.c
        void animate_zombies_map(game_t *game, map_t *map, int idx_wave);
        void animate_zombies_map_2(
            game_t *game, map_t *map, int idx_wave, int idx_zombie);

        // check_damage.c
        void check_damage(game_t *game, map_t *map, wave_t *wave);
        void check_contact_plant_zombie(
            map_t *map, wave_t *wave, sfFloatRect plant_area, int idx);
        void check_contact_plant_zombie_2(
            map_t *map, wave_t *wave, sfFloatRect plant_area, int idx);
        void check_contact_plant_zombie_3(
            map_t *map, wave_t *wave, sfFloatRect plant_area, int idx);

        // move_sun.c
        void move_sun(game_t *game);

        // score.c
        void check_and_display_score(game_t *game, map_t *map);

        // zombie_hit_castle.c
        void zombie_hit_castle_map(game_t *game, map_t *map, int idx_wave);

// Display
    // Bottom Gamebar
        // display.c
        void display_bottom_gamebar(game_t *game);

    // Home Menu
        // cards.c
        void display_maps_home_menu(game_t *game);
        void display_plants_zombies_home_menu(game_t *game);
        void display_stats_home_menu(game_t *game);
        void display_settings_home_menu(game_t *game);
        void display_howtoplay_home_menu(game_t *game);

        // display.c
        void display_home_menu(game_t *game);
        void display_cards_home_menu(game_t *game);

    // Howtoplay Menu
        // display.c
            void display_howtoplay_menu(game_t *game);

    // Loading Screen
        // display.c
        void display_loading_screen(game_t *game);

    // Maps
        // Map 1
            // display.c
            void display_map_1(game_t *game);
            void check_result_and_hit_map(game_t *game, map_t *map);

        // draw_infos.c
        void draw_infos(game_t *game, map_t *map);
        void draw_texts_infos(game_t *game, map_t *map, int idx);
        void draw_name_text_info(game_t *game, map_t *map, int idx);

        // draw_objects.c
        void draw_map_objects(game_t *game, map_t *map);
        void draw_plants(game_t *game, map_t *map);
        void draw_zombies(game_t *game, map_t *map);
        void draw_wave_text(game_t *game, map_t *map);

        // hits_and_result.c
        void check_result_and_hit_map(game_t *game, map_t *map);

    // Maps Menu
        // display.c
        void display_maps_menu(game_t *game);
        void display_cards_maps_menu(game_t *game);

    // Pause Menu
        // buttons.c
        void display_buttons_pause_menu(game_t *game);

        // display.c
        void display_pause_menu(game_t *game);

    // Plants Menu
        // cards.c
        void display_cards_plants_menu(game_t *game);
        void display_plants_plants_menu(game_t *game);
        void display_zombies_plants_menu(game_t *game);

        // display.c
        void display_plants_menu(game_t * game);

    // Popup Menu
        // display.c
        void display_popup_menu(game_t *game);

    // Results Screen
        // display.c
        void display_results_screen(game_t *game);

    // Settings Menu
        // bars.c
        void display_bars_settings_menu(game_t *game);

        // display.c
        void display_settings_menu(game_t *game);

        // fps.c
        void display_fps_settings_menu(game_t *game);
        void display_fps_settings_menu_2(game_t *game);

        // res.c
        void display_res_settings_menu(game_t *game);
        void display_res_settings_menu_2(game_t *game);

    // Start Menu
        // display.c
        void display_start_menu(game_t *game);

    // Stats Menu
        // display.c
        void display_stats_menu(game_t *game);
        void set_strings_texts_stats_menu(game_t *game);
        void display_text_stats_menu(game_t *game);

    // Top Bar
        // display.c
        void display_top_bar(game_t *game, int stage);
        void display_top_bar_2(game_t *game, int stage);

// Event
    // Bottom Gamebar
        // key_pressed.c
        void key_pressed_bottom_gamebar(game_t *game);

        // mouse_moved.c
        void mouse_moved_bottom_gamebar(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_bottom_gamebar(game_t *game);
        void mouse_pressed_plants_bottom_gamebar(game_t *game);
        void select_plant_to_create(game_t *game, int idx);

    // Home Menu
        // key_pressed.c
        void key_pressed_home_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_home_menu(game_t *game);
        void mouse_moved_cards_home_menu(game_t *game);
        void mouse_moved_plants_cards_plants_menu(game_t *game);
        void mouse_moved_zombies_cards_plants_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_home_menu(game_t *game);
        void mouse_pressed_cards_home_menu(game_t *game);

    // Howtoplay Menu
        // key_pressed.c
        void key_pressed_howtoplay_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_howtoplay_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_howtoplay_menu(game_t *game);

    // Maps
        // Map1
            // key_pressed.c
            void key_pressed_map1(game_t *game);

            // mouse_moved.c
            void mouse_moved_map1(game_t *game);

            // mouse_pressed.c
            void mouse_pressed_map1(game_t *game);

        // Put Plants
            //check_money.c
            int check_money(game_t *game);

            // map1.c
            void put_plant_on_map1(game_t *game);
            int check_if_placement_is_ok(
                game_t *game, map_t *map, sfVector2f coords, int idx_obj);
            void create_plant(game_t *game, map_t *map, sfVector2f pos);
            void create_plant_2(
                game_t *game, map_t *map, sfVector2f pos, int idx);

            // maps.c
            void put_plant_on_map(game_t *game);

        // event_fertilizer.c
        void event_fertilizer(game_t *game, map_t *map);
        void check_plant_to_upgrade(game_t *game, plant_t *plant);
        void upgrade_plant_to_level_2(game_t *game, plant_t *plant);
        void upgrade_plant_to_level_3(game_t *game, plant_t *plant);

        // event_hover_plant.c
        void hover_plants(game_t *game, map_t *map);

        // event_transplanter.c
        void event_transplanter(game_t *game, map_t *map);

    // Maps Menu
        // key_pressed.c
        void key_pressed_maps_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_maps_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_maps_menu(game_t *game);

    // Pause Menu
        // key_pressed.c
        void key_pressed_pause_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_pause_menu(game_t *game);
        void mouse_moved_buttons_pause_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_pause_menu(game_t *game);
        void mouse_pressed_pause_menu_2(game_t *game);
        void reset_data_map(game_t *game, map_t *map);

    // Plants Menu
        // key_pressed.c
        void key_pressed_plants_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_plants_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_plants_menu(game_t *game);

    // Popup Menu
        // key_pressed.c
        void key_pressed_popup_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_popup_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_popup_menu(game_t *game);

    // Results Screen
        // key_pressed.c
        void key_pressed_results_screen(game_t *game);

        // mouse_moved.c
        void mouse_moved_results_screen(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_results_screen(game_t *game);

    // Settings Menu
        // key_pressed.c
        void key_pressed_settings_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_settings_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_settings_menu(game_t *game);
        void mouse_pressed_bars_settings_menu(game_t *game);
        void mouse_pressed_fps_settings_menu(game_t *game);
        void mouse_pressed_res_settings_menu(game_t *game);

    // Start Menu
        // key_pressed.c
        void key_pressed_start_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_start_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_start_menu(game_t *game);

    // Stats Menu
        // key_pressed.c
        void key_pressed_stats_menu(game_t *game);

        // mouse_moved.c
        void mouse_moved_stats_menu(game_t *game);

        // mouse_pressed.c
        void mouse_pressed_stats_menu(game_t *game);

    // Top Bar
        // key_pressed.c
        void key_pressed_top_bar(game_t *game, int stage);

        // mouse_moved.c
        void mouse_moved_top_bar(game_t *game, int stage);
        void mouse_moved_top_bar_2(game_t *game, int stage);
        void mouse_moved_top_bar_3(game_t *game, int stage);

        //mouse_pressed.c
        void mouse_pressed_top_bar(game_t *game, int stage);
        void mouse_pressed_top_bar_2(game_t *game, int stage);

    // event_1.c
    void event(game_t *game);
    void event_key_pressed(game_t *game);
    void mouse_button_pressed(game_t *game);
    void mouse_moved(game_t *game);

    // event_2.c
    void event_key_pressed_2(game_t *game);
    void mouse_button_pressed_2(game_t *game);
    void mouse_moved_2(game_t *game);

    // event_3.c
    void event_key_pressed_3(game_t *game);
    void mouse_button_pressed_3(game_t *game);
    void mouse_moved_3(game_t *game);

// Tools
    // audio.c
    void down_volume(game_t *game);
    void up_volume(game_t *game);
    void down_sounds(game_t *game);
    void up_sounds(game_t *game);
    void stop_musics(game_t *game);

    // create_plant.c
    plant_t *create_peashooter(sfVector2f pos);
    plant_t *create_sunflower(sfVector2f pos);
    plant_t *create_torchwood(sfVector2f pos);
    plant_t *create_mine_potato(sfVector2f pos);
    plant_t *create_ice_shooter(sfVector2f pos);

    // fps.c
    void down_fps(game_t *game);
    void up_fps(game_t *game);

    // get_time.c
    char *get_time(game_t *game);
    char *put_time_in_str(int hour, int minute);

    // res.c
    void down_res(game_t *game);
    void down_res_2(game_t *game);
    void up_res(game_t *game);
    void up_res_2(game_t *game);

    // save_data.c
    void save_data(game_t *game);
    void save_value_in_file(int value, const char filepath[]);

// my_defender.c
int my_defender(void);
void select_game_stage(game_t *game);
void select_game_stage_2(game_t *game);
void select_game_stage_3(game_t *game);
void display_cursor(game_t *game);

#endif /* !GAME_H_ */
