/*
** EPITECH PROJECT, 2021
** Display File for BSQ
** File description:
** Xavier VINCENT
*/

#include "bsq.h"

char **replace_square_in_map(char **map, bsq_t bsq)
{
    int backup_col = bsq.col;

    for (int i = 0; i < bsq.square_size; i += 1) {
        for (int j = 0; j < bsq.square_size; j += 1) {
            map[bsq.row][bsq.col] = 'x';
            bsq.col += 1;
        }
        bsq.col = backup_col;
        bsq.row += 1;
    }
    return map;
}

void display_map(char **map, int nb_rows, int nb_cols)
{
    for (int i = 0; i <= nb_rows; i += 1)
        my_putstr(map[i]);
}
