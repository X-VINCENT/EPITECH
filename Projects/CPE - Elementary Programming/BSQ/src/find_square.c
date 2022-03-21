/*
** EPITECH PROJECT, 2021
** Algorithms BSQ
** File description:
** Xavier VINCENT
*/

#include "bsq.h"

int is_square_of_size(char **map, int row, int col, int square_size)
{
    int is_square = 1;

    for (int i = 0; (i < square_size) && (is_square == 1); i += 1) {
        for (int j = 0; (j < square_size) && (is_square == 1); j += 1)
            is_square = (map[row + i][col + j] != '.') ? 0 : 1;
    }
    return is_square;
}

bsq_t store_data(bsq_t bsq, int col, int row, int big_sqr)
{
    bsq.col = col;
    bsq.row = row;
    bsq.square_size = big_sqr;
    return bsq;
}

bsq_t find_biggest_square(char **map, int nb_rows, int nb_cols, bsq_t bsq)
{
    int col = 0;
    int row = 0;
    int big_sqr = 0;

    while (row + big_sqr <= nb_rows + 1) {
        while (col + big_sqr <= nb_cols + 1) {
            bsq = (is_square_of_size(map, row, col, big_sqr) == 1) ?
                store_data(bsq, col, row, big_sqr) : bsq;
            big_sqr = (is_square_of_size(map, row, col, big_sqr) == 1) ?
                big_sqr += 1 : big_sqr;
            col = (is_square_of_size(map, row, col, big_sqr) == 1) ?
                col : col + 1;
        }
        col = 0;
        row += 1;
    }
    return bsq;
}
