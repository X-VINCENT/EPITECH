/*
** EPITECH PROJECT, 2022
** Init Header for My Runner
** File description:
** Xavier VINCENT
*/

#ifndef INIT_H_
    #define INIT_H_

    #include "my_runner.h"

// Init Array
char **load_map(const char *filepath);
int get_nb_of_cols(const char *filepath);
int get_nb_of_rows(const char *filepath);

// Init Game
game_t *init_game(void);
void init_window(game_t *game);
event_t *init_event(void);
score_t *init_score(void);

// Init Home Menu
void init_home_menu(game_t *game);
void init_text_home_menu(game_t *game);
void setting_up_best_score_home_menu(home_menu_t *home_menu);
void init_buttons_home_menu(home_menu_t *home_menu);
void init_buttons_2_home_menu(home_menu_t *home_menu);

// Init Map
void init_map(game_t *game, const char *filepath);
void init_sprite_map(map_t *map);
void create_map_sprites(map_t *map, int i, int j);
void create_map_sprites_2(map_t *map, int i, int j);

// Init Pause Menu
void init_pause_menu(game_t *game);
void init_text_pause_menu(game_t *game);
void setting_up_pause_pause_menu(pause_menu_t *pause_menu);
void init_buttons_pause_menu(pause_menu_t *pause_menu);
void init_buttons_2_pause_menu(pause_menu_t *pause_menu);
void init_sounds_results_menu(results_menu_t *results_menu);

// Init Results Menu 2
void init_buttons_results_menu(results_menu_t *results_menu);
void init_buttons_2_results_menu(results_menu_t *results_menu);

// Init Results Menu
void init_results_menu(game_t *game);
void init_buttons_results_menu(results_menu_t *results_menu);
void init_text_results_menu(results_menu_t *results_menu);
void setting_up_text_results_menu(results_menu_t *results_menu);
void setting_up_text_2_results_menu(results_menu_t *results_menu);

// Init Runner
void init_runner(game_t *game);
parallax_t *init_parallax(void);
character_t *init_character(void);

// Init Settings Menu
void init_settings_menu(game_t *game);
void init_text_settings_menu(game_t *game);
void init_buttons_settings_menu(game_t *game);
void init_res_buttons(game_t *game);
void init_fps_buttons(game_t *game);

#endif /* !INIT_H_ */
