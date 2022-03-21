/*
** EPITECH PROJECT, 2022
** Header
** File description:
** Xavier VINCENT
*/

#ifndef PROJECT_H_
    #define PROJECT_H_

// Libs
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// Macros
    #define SUCCESS 0
    #define ERROR 84

typedef struct options {
    int bytes;
    int lines;
    int quiet;
    int verbose;
} options_t;

int head(const int nb_args, const char **args);

options_t *get_options(const char **args);
int get_options_2(const char **args, options_t *options);

int select_options(const char *filename, options_t *options);

int basic_head(const char *filename, int nb_lines_to_print);
int bytes_head(const char *filename, int nb_bytes_to_print);

int get_file_nb_of_lines(const char *filename);
char *load_file_in_mem(const char *filename);

#endif /* !PROJECT_H_ */
