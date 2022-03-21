/*
** EPITECH PROJECT, 2022
** Header for My Sokoban
** File description:
** Xavier VINCENT
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

// Libs
    #include <ncurses.h>
    #include <signal.h>
    #include <unistd.h>
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// Macros
    #define SUCCESS 0
    #define ERROR 84

// Data
    typedef struct map_data {
        char *map_path;
        char **map;
        char **backup_map;
        int nb_lines;
        int *col_sizes;
        int longest_line;
        int nb_boxes;
        int nb_objectives;
    } map_data_t;

    typedef struct player {
        int x;
        int y;
    } player_t;

    typedef struct boxes {
        int x;
        int y;
    } boxes_t;

    typedef struct objectives {
        int x;
        int y;
    } objectives_t;

    typedef struct data {
        map_data_t *map_data;
        player_t *player;
        boxes_t **boxes;
        objectives_t **objectives;
    } data_t;

// Destroy
    // Destroy Data
    int destroy_data(data_t *data);
    int destroy_map_data(map_data_t *map_data);
    int destroy_player(player_t *player);
    int destroy_boxes(boxes_t **boxes);
    int destroy_objectives(objectives_t **objectives);

// Errors
    // Check Map
    int check_map(const char *buff);
    int check_char_in_map(int p, int o, int x);
    // Help
    int print_help(void);

// Init
    // Backup Map
    char **backup_map(char **map);
    // Init Data
    data_t *init_data(const char *map_path);
    player_t *init_player(char **map);
    // Init Map Data
    map_data_t *init_map_data(const char *map_path);
    int get_map_lines(const char *map_path);
    int *get_map_col_sizes(const char *map_path);
    int get_longest_map_line(int *col_sizes);
    char **load_map(const char *map_path, int nb_lines, int *col_sizes);
    // Init Objects
    int init_boxes(data_t *data);
    void check_boxes(data_t *data, int x, int y, int *idx);
    int init_objectives(data_t *data);
    void check_objectives(data_t *data, int x, int y, int *idx);

// Tools
    // Display Map
    int display_map(data_t *data);
    int display_objectives(data_t *data);
    // Get Nb Blocked Boxes
    int get_nb_blocked_boxes(data_t *data);
    // Get Nb Objects
    int get_nb_objects(map_data_t *map_data, const char *buff);
    // Get Player Position
    int get_player_position(char **map, player_t *player);
    int check_player_position(player_t *player, char **map, int y);
    // Move Box
    void move_box_up(data_t *data, int x, int y);
    void move_box_down(data_t *data, int x, int y);
    void move_box_left(data_t *data, int x, int y);
    void move_box_right(data_t *data, int x, int y);
    int select_box(data_t *data, int box_x, int box_y);
    // Move Player
    void move_player(data_t *data, const int input);
    void move_player_up(data_t *data, int x, int y);
    void move_player_down(data_t *data, int x, int y);
    void move_player_left(data_t *data, int x, int y);
    void move_player_right(data_t *data, int x, int y);

// Engine
    int engine(data_t *data);
    int win_condition(data_t *data);
    int loose_condition(data_t *data);
    int check_input(data_t *data, int input);
    void reload_data(data_t *data);

// My Sokoban
    int my_sokoban(const char *map_path);
    int game(data_t *data, const char *map_path);

#endif /* !SOKOBAN_H_ */
