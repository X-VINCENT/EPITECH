/*
** EPITECH PROJECT, 2021
** BSQ FIle for BSQ
** File description:
** Xavier VINCENT
*/

#include "bsq.h"

int bsq(char const *filepath)
{
    bsq_t bsq;
    int fd = open(filepath, O_RDONLY);
    int nb_rows = fs_get_nb_of_rows(fd);
    int nb_cols = fs_get_nb_of_cols(fd);
    char **map;

    if (handle_errors(nb_rows, nb_cols) == ERROR)
        return ERROR;
    close(fd);
    map = load_map(filepath, nb_rows, nb_cols);
    bsq = find_biggest_square(map, nb_rows, nb_cols, bsq);
    map = replace_square_in_map(map, bsq);
    display_map(map, nb_rows, nb_cols);
    return SUCCESS;
}
