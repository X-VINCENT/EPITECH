/*
** EPITECH PROJECT, 2022
** Game Header for My Runner
** File description:
** Xavier VINCENT
*/

#ifndef GAME_H_
    #define GAME_H_

    #include "my_runner.h"

// Animation
void animate_parallax(parallax_t *parallax);
void animate_character(character_t *character);
void character_jump(character_t *character);
void button_hover(sfSprite *sprite, sfClock *clock,
    sfFloatRect *global_bounds, sfVector2f coords);
void button_hover_little(sfSprite *sprite, sfClock *clock,
    sfFloatRect *global_bounds, sfVector2f coords);

// Check Contact
void check_contact(game_t *game);
void check_contact_boxes(game_t *game, int i);
void check_contact_snowmans(game_t *game, int i);
void check_contact_coins(game_t *game, int i);

// Display Home Menu
void display_home_menu(game_t *game);

// Display Map
void display_map(game_t *game);
void move_map(game_t *game);
void move_sprite_map(game_t *game, sfSprite *sprite);
void move_coins(map_t *map);

// Display Pause Menu
void display_pause_menu(game_t *game);
void draw_score_pause_menu(sfRenderWindow *window, sfText *score);

// Display Results Menu
void display_results_menu(game_t *game);
void edit_text_results_menu(game_t *game);
void center_text_results_menu(results_menu_t *results_menu);
void draw_results_menu(game_t *game);

// Display Settings Menu
void display_settings_menu(game_t *game);

// Display
void display(game_t *game);
void display_parallax(sfRenderWindow *window, parallax_t *parallax);
void display_character(sfRenderWindow *window, character_t *character);
void display_score(sfRenderWindow *window, score_t *score);
void display_fps(sfRenderWindow *window, sfText *fps, sfClock *clock_fps);
void display_map(game_t *game);

// Event
void event(game_t *game);
void event_key_pressed(game_t *game);
void mouse_button_pressed(game_t *game);
void mouse_moved(game_t *game);

// Key Event
void key_pressed_home_menu(game_t *game);
void key_pressed_runner(game_t *game);
void key_pressed_pause_menu(game_t *game);
void key_pressed_settings_menu(game_t *game);

// Mouse Button Event 2
void mouse_button_results_menu(game_t *game);
void mouse_button_2_results_menu(game_t *game);

// Mouse Button Event
void mouse_button_home_menu(game_t *game);
void mouse_button_2_home_menu(game_t *game);
void mouse_button_pause_menu(game_t *game);
void mouse_button_2_pause_menu(game_t *game);
void mouse_button_settings_menu(game_t *game);

// Mouse Moved Event
void mouse_moved_home_menu(game_t *game);
void mouse_moved_pause_menu(game_t *game);
void mouse_moved_settings_menu(game_t *game);
void mouse_moved_results_menu(game_t *game);

// My Runner
int my_runner(const char *map_path);
void init_map(game_t *game, const char *map_path);
void display_cursor(game_t *game);
void select_game_stage(game_t *game);
void select_game_stage_2(game_t *game);

// Reset
void reset_game(game_t *game);

// Score
void save_best_score(int score);
int get_best_score_from_file(void);

// Settings Menu
void set_res_settings_menu(game_t *game);
void set_fps_settings_menu(game_t *game);

// Sounds
void set_sounds_volume(game_t *game);
void set_min_volume(game_t *game);
void set_max_volume(game_t *game);

#endif /* !GAME_H_ */
