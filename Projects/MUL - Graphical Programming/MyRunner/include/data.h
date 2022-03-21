/*
** EPITECH PROJECT, 2022
** Data Header for My Runner
** File description:
** Xavier VINCENT
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "csfml.h"


    typedef struct home_menu {
        sfSprite *bg;
        sfText *my_runner;
        sfText *best_score;
        sfText *creator;
        sfSprite *play;
        sfSprite *quit;
        sfSprite *settings;
        sfSprite *mute;
        sfSprite *unmute;
        sfMusic *music;
        sfClock *clock;
    } home_menu_t;

    typedef struct parallax {
        sfSprite *sky;
        sfSprite *bg;
        sfSprite *middle;
        sfSprite *fg;
        sfSprite *g1;
        sfSprite *g2;
        sfSprite *snow;
        sfClock *clock;
        float speed;
    } parallax_t;

    typedef struct character {
        sfSprite *attack;
        sfSprite *hurt;
        sfSprite *run;
        sfClock *clock;
        sfClock *clock_jump;
        sfSound *jump_sound;
        sfSound *death;
        int jump;
    } character_t;

    typedef struct pause_menu {
        sfSprite *bg;
        sfText *pause;
        sfText *score;
        sfText *creator;
        sfSprite *play;
        sfSprite *quit;
        sfSprite *restart;
        sfSprite *settings;
        sfSprite *mute;
        sfSprite *unmute;
        sfSound *open_pause_menu;
        sfClock *clock;
    } pause_menu_t;

    typedef struct settings_menu {
        sfSprite *bg;
        sfText *text_settings;
        sfText *text_res;
        sfSprite *res_1;
        sfSprite *res_2;
        sfSprite *res_3;
        sfText *text_fps;
        sfSprite *fps_1;
        sfSprite *fps_2;
        sfSprite *fps_3;
        sfSprite *back;
        sfClock *clock;
    } settings_menu_t;

    typedef struct results_menu {
        sfSprite *bg;
        sfText *win;
        sfText *loose;
        sfSprite *play;
        sfSprite *quit;
        sfSprite *settings;
        sfText *score;
        sfText *best_score;
        sfSprite *mute;
        sfSprite *unmute;
        sfClock *clock;
        sfSound *win_sound;
        sfSound *loose_sound;
        int result;
    } results_menu_t;

    typedef struct assets {
        home_menu_t *home_menu;
        parallax_t *parallax;
        character_t *character;
        pause_menu_t *pause_menu;
        settings_menu_t *settings_menu;
        results_menu_t *results_menu;
        sfMusic *game_music;
        sfText *fps;
        sfSprite *cursor;
    } assets_t;

    typedef struct event {
        sfEvent *event;
        sfClock *clock;
        sfSound *click_button;
    } event_t;

    typedef struct score {
        sfSprite *sign;
        sfText *text;
        sfClock *clock;
        int score;
        int best_score;
    } score_t;

    typedef struct map {
        char **map;
        int nb_rows;
        int nb_cols;
        float sprite_size;
        sfSprite **boxes;
        sfSprite **snowmans;
        sfSprite **coins;
        int boxes_index;
        int snowmans_index;
        int coins_index;
        sfClock *clock;
        sfClock *coins_clock;
        sfSound *coin_sound;
    } map_t;

    typedef struct game {
        sfRenderWindow *window;
        sfClock *clock_fps;
        event_t *event;
        assets_t *assets;
        score_t *score;
        map_t *map;
        int stage;
        int last_stage;
    } game_t;

#endif /* !DATA_H_ */
