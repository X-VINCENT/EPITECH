/*
** EPITECH PROJECT, 2021
** Init Map File for BSQ
** File description:
** Xavier VINCENT
*/

#include "bsq.h"

int fs_get_nb_of_rows(int fd)
{
    int number = -1;
    char *buff = malloc(sizeof(char) * 16);

    read(fd, buff, 16);
    number = my_getnbr(buff);
    free(buff);
    return number;
}

int fs_get_nb_of_cols(int fd)
{
    int i = 0;
    int counter = 0;
    char *buff = malloc(sizeof(char) * 2147483647);

    read(fd, buff, 2147483647);
    while (buff[i] != '\n')
        i += 1;
    i += 1;
    while (buff[i] != '\n') {
        i += 1;
        counter += 1;
    }
    free(buff);
    return counter;
}

int read_first_line(int fd, int nb_rows)
{
    char *empty = malloc(sizeof(char) * my_getnbsize(nb_rows) + 1);

    read(fd, empty, my_getnbsize(nb_rows) + 1);
    return fd;
}

char **load_map(char const *filepath, int nb_rows, int nb_cols)
{
    int fd = open(filepath, O_RDONLY);
    char **map = malloc(sizeof(char *) * nb_rows + 1);

    for (int i = 0; i <= nb_rows; i += 1) {
        if (i == 0)
            fd = read_first_line(fd, nb_rows);
        map[i] = malloc(sizeof(char) * nb_cols + 1);
        read(fd, map[i], nb_cols + 1);
        map[i][nb_cols + 1] = '\0';
    }
    return map;
}
