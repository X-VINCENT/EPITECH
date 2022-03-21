/*
** EPITECH PROJECT, 2021
** BSQ Header
** File description:
** Xavier VINCENT
*/

#ifndef BSQ_H_
    #define BSQ_H_

    #include <fcntl.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include "../lib/my/my.h"

    #define ERROR_ARGUMENTS 84
    #define ERROR_FILE 84
    #define ERROR_INVALID_MAP_SIZE 84
    #define ERROR 84
    #define HELP 84
    #define SUCCESS 0

    #define ERROR_ARGUMENTS_MSG "Bad Arguments\n"
    #define ERROR_FILE_MSG "File not found\n"
    #define ERROR_INVALID_MAP_SIZE_MSG "Invalid Map Size\n"
    #define HELP_MSG "[USAGE] ./bsq \"filepath\"\n\n[DESCRIPTION]\n"
    #define HELP_MSG_2 "BSQ finds the biggest square of points in a map\n"

typedef struct bsq {
    int row;
    int col;
    int square_size;
} bsq_t;

int bsq(char const *filepath);
int check_file(char const *filepath);
int fs_get_nb_of_rows(int fd);
int fs_get_nb_of_cols(int fd);
int handle_errors(int fd, int nb_rows);
int read_first_line(int fd, int nb_cols);
char **load_map(char const *filepath, int nb_rows, int nb_cols);
int is_square_of_size(char **map, int row, int col, int square_size);
bsq_t find_biggest_square(char **map, int nb_rows, int nb_cols, bsq_t bsq);
bsq_t store_data(bsq_t bsq, int col, int row, int big_sqr);
char **replace_square_in_map(char **map, bsq_t bsq);
void display_map(char **map, int nb_rows, int nb_cols);

#endif /* !BSQ_H_ */
