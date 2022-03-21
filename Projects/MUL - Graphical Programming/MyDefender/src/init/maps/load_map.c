/*
** EPITECH PROJECT, 2022
** Load Map for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

int get_map_lines(const char *map_path)
{
    char *buff = NULL;
    int nb_lines = 0;

    if (!map_path)
        return -1;
    if (!(buff = my_load_file_in_mem(map_path)))
        return -1;
    for (int idx = 0; buff[idx] != '\0'; idx += 1) {
        if (buff[idx] == '\n')
            nb_lines += 1;
    }
    return nb_lines;
}

int *get_map_col_sizes(const char *map_path)
{
    char *buff = NULL;
    int *col_sizes = 0;
    int line = 0;
    int nb_lines = 0;

    if (!map_path || !(buff = my_load_file_in_mem(map_path)))
        return NULL;
    for (int idx = 0; buff[idx] != '\0'; idx += 1)
        if (buff[idx] == '\n')
            nb_lines += 1;
    if (!(col_sizes = malloc(sizeof(int) * nb_lines + 1)))
        return NULL;
    for (int idx = 0; buff[idx] != '\0'; idx += 1) {
        if (buff[idx] != '\n')
            col_sizes[line] += 1;
        else
            line += 1;
    }
    return col_sizes;
}

char **load_map(const char *map_path, int nb_lines, int *col_sizes)
{
    int fd = 0;
    char **map = NULL;

    if ((fd = open(map_path, O_RDONLY)) == -1)
        return NULL;
    if (!(map = malloc(sizeof(char *) * nb_lines + 1)))
        return NULL;
    for (int idx = 0; idx < nb_lines; idx += 1) {
        if (!(map[idx] = malloc(sizeof(char) * col_sizes[idx] + 1)))
            return NULL;
        if (read(fd, map[idx], col_sizes[idx] + 1) < col_sizes[idx])
            return NULL;
        map[idx][col_sizes[idx]] = '\0';
    }
    map[nb_lines] = NULL;
    close(fd);
    return map;
}
