/*
** EPITECH PROJECT, 2022
** Header
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#ifndef PROJECT_H_
    #define PROJECT_H_

// Libs
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// Macros
    #define SUCCESS 0
    #define ERROR 84

// Structs

typedef struct data {
    char **map;
    char **map_to_edit;
    int nb_lines;
    int *col_sizes;
} data_t;

// Functions
data_t *init_data(const char *map_path);
int check_map_lines(const char *line);
int get_map_lines(const char *map_path);
int *get_map_col_sizes(const char *map_path);
char **load_map(const char *map_path, int nb_lines, int *col_sizes);
int gameoflife(const char *map_path, const int iterations);
int destroy_map(char **map);
char **clone_map(char **map);
int make_gameoflife(data_t *data);
int make_gameoflife_line(data_t *data, int y);
int print_map(char **map);
int destroy_data(data_t *data);
int get_nb_neighbours(char **map, int x, int y);
int get_nb_neighbours_top(char **map, int x, int y);
int get_nb_neighbours_sides(char **map, int x, int y);
int get_nb_neighbours_bottom(char **map, int x, int y);

#endif /* !PROJECT_H_ */
