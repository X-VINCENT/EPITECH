/*
** EPITECH PROJECT, 2022
** Data Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#ifndef DATA_H_
    #define DATA_H_

    #include "csfml.h"

    typedef struct start_menu {
        sfSprite *bg;
        sfMusic *music;
        sfSprite *play;
        sfSprite *quit;
        sfClock *clock;
    } start_menu_t;

    typedef struct home_menu {
        sfSprite *bg;
        sfMusic *music;
        sfClock *clock;
        sfSprite *maps_off;
        sfSprite *maps_on;
        sfSprite *plants;
        sfSprite *zombies;
        sfSprite *stats_off;
        sfSprite *stats_on;
        sfSprite *settings_off;
        sfSprite *settings_on;
        sfSprite *howtoplay_off;
        sfSprite *howtoplay_on;
        int maps_status;
        int plants_status;
        int stats_status;
        int settings_status;
        int howtoplay_status;
    } home_menu_t;

    typedef struct maps_menu {
        sfSprite *bg;
        sfSprite **maps_off;
        sfSprite **maps_on;
        int *cards_status;
        sfClock *clock;
    } maps_menu_t;

    typedef struct plants_menu {
        sfSprite *bg;
        sfSprite **plants_off;
        sfSprite **plants_on;
        sfSprite **zombies_off;
        sfSprite **zombies_on;
        sfSprite **plants_description;
        sfSprite **zombies_description;
        int *plants_cards_status;
        int *zombies_cards_status;
    } plants_menu_t;

    typedef struct stats_menu {
        sfSprite *bg;
        sfText *text_time_played;
        sfText *text_best_score;
        sfText *text_damage_caused;
        sfText *text_zombies_killed;
        sfText *text_suns_picked_up;
        sfText *text_plants_planted;
    } stats_menu_t;

    typedef struct howtoplay_menu {
        sfSprite *bg;
        sfClock *clock;
    } howtoplay_menu_t;

    typedef struct settings_menu {
        sfSprite *bg;
        sfClock *clock;
        sfSprite **volume_bar;
        sfSprite *volume_bar_down;
        sfSprite *volume_bar_up;
        sfSprite **sound_bar;
        sfSprite *sound_bar_down;
        sfSprite *sound_bar_up;
        sfText **fps;
        sfSprite *fps_left;
        sfSprite *fps_right;
        sfText **res;
        sfSprite *res_left;
        sfSprite *res_right;
    } settings_menu_t;

    typedef struct popup_menu {
        sfSprite *popup;
        sfSprite *yes_off;
        sfSprite *yes_on;
        sfSprite *no_off;
        sfSprite *no_on;
        sfClock *clock;
        int hover_yes;
        int hover_no;
    } popup_menu_t;

    typedef struct pause_menu {
        sfSprite *bg;
        sfSprite **buttons_on;
        sfSprite **buttons_off;
        int *buttons_status;
        sfClock *clock;
    } pause_menu_t;

    typedef struct top_bar {
        sfSprite *home_off;
        sfSprite *maps_off;
        sfSprite *plants_off;
        sfSprite *stats_off;
        sfSprite *howtoplay_off;
        sfSprite *settings_off;
        sfSprite *home_on;
        sfSprite *maps_on;
        sfSprite *plants_on;
        sfSprite *stats_on;
        sfSprite *howtoplay_on;
        sfSprite *settings_on;
        sfClock *clock;
    } top_bar_t;

    typedef struct bottom_gamebar {
        sfSprite *bar;
        sfText *suns_available;
        sfSprite **plants;
        sfText **plants_price;
        sfSprite *fertilizer;
        sfSprite *transplanter;
        sfSprite **speed_button;
        sfSprite *pause_button;
        sfClock *clock;
    } bottom_gamebar_t;

    typedef struct loading_screen {
        sfSprite *bg;
    } loading_screen_t;

    typedef struct results_screen {
        sfSprite *win_bg;
        sfSprite *loose_bg;
        sfText *win_text;
        sfSound *win_sound;
        sfSound *loose_sound;
        sfClock *clock;
    } results_screen_t;

    typedef struct sounds {
        sfSound *plant;
        sfSound *transplanter;
        sfSound *score;
        sfSound *menu;
    } sounds_t;

    typedef struct assets {
        sfSprite *cursor;
        start_menu_t *start_menu;
        home_menu_t *home_menu;
        maps_menu_t *maps_menu;
        plants_menu_t *plants_menu;
        stats_menu_t *stats_menu;
        howtoplay_menu_t *howtoplay_menu;
        settings_menu_t *settings_menu;
        popup_menu_t *popup_menu;
        pause_menu_t *pause_menu;
        top_bar_t *top_bar;
        bottom_gamebar_t *bottom_gamebar;
        loading_screen_t *loading_screen;
        results_screen_t *results_screen;
        sounds_t *sounds;
    } assets_t;

    typedef struct event {
        sfEvent *event;
        sfSound *click;
    } event_t;

    enum type {
        GRASS = 1,
        PATH = 2,
        POT = 3,
        SPAWNER = 4,
        HOUSE = 5
    };

    typedef struct object {
        sfSprite *sprite;
        int x;
        int y;
        enum type type;
    } object_t;

    enum name {
        HUGO,
        MAX,
        GAUTIER,
        MICHAEL_JACKSON
    };

    typedef struct zombie {
        sfSprite *sprite;
        int health;
        int speed;
        int default_speed;
        int anim_speed;
        enum name name;
        sfClock *clock_move;
        sfClock *clock_animate;
        sfText *health_text;
    } zombie_t;

    typedef struct wave {
        zombie_t **zombies;
        int zombies_alive;
    } wave_t;

    enum plant_name {
        PEASHOOTER,
        SUNFLOWER,
        TORCHWOOD,
        MINE_POTATO,
        ICE_SHOOTER
    };

    typedef struct plant {
        sfSprite *sprite;
        sfCircleShape *area;
        int damage;
        int speed;
        sfClock *clock_anim;
        sfClock *clock_damage;
        enum plant_name name;
        int level;
        int is_hover;
    } plant_t;

    typedef struct score {
        sfText *score;
        sfClock *clock;
    } score_t;

    typedef struct map {
        char **map;
        object_t **objects;
        wave_t **waves;
        plant_t **plants;
        score_t *score;
        int castle_health;
        int max_towers;
        int current_wave;
        int tmp_damage;
        int tmp_zombies_killed;
        sfSound *zombie_death;
    } map_t;

    typedef struct maps {
        map_t *map1;
        sfSprite *sun;
        int sunflower_value;
        sfClock *sun_clock;
        sfRectangleShape *info;
        sfText *info_text_name;
        sfText *info_text_damage;
        sfText *info_text_level;
        sfMusic *michael_music;
        sfText *wave_text;
        sfClock *clock_wave_text;
        int money;
    } maps_t;

    typedef struct stats {
        int score;
        int time_playing;
        int best_score;
        int damage_caused;
        int zombies_killed;
        int suns_picked_up;
        int plants_planted;
        sfClock *time_playing_clock;
    } stats_t;

    typedef struct game {
        sfRenderWindow *window;
        event_t *event;
        assets_t *assets;
        maps_t *maps;
        stats_t *stats;
        int stage;
        int last_stage;
        int popup;
        int fps;
        int res;
        int speed;
        int result;
        int is_fertilizer_selected;
        int trans_selected;
        int is_plant_selected;
        int plant_selected;
        int show_areas;
    } game_t;

#endif /* !DATA_H_ */
