/*
** EPITECH PROJECT, 2022
** Init Map Data
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"

data_t *init_data(const char *map_path)
{
    data_t *data = NULL;

    if (!map_path)
        return NULL;
    if (!(data = malloc(sizeof(data_t))))
        return NULL;
    if ((data->nb_lines = get_map_lines(map_path)) == -1)
        return NULL;
    if (!(data->col_sizes = get_map_col_sizes(map_path)))
        return NULL;
    if (!(data->map_to_edit = load_map(
        map_path, data->nb_lines, data->col_sizes)))
        return NULL;
    for (int idx = 0; data->map_to_edit[idx] != NULL; idx += 1)
        if (check_map_lines(data->map_to_edit[idx]) == ERROR)
            return NULL;
    data->map = NULL;
    return data;
}

int check_map_lines(const char *line)
{
    if (!line)
        return ERROR;
    for (int idx = 0; line[idx] != '\0'; idx += 1)
        if (line[idx] != 'X' && line[idx] != '.')
            return ERROR;
    return SUCCESS;
}

int get_map_lines(const char *map_path)
{
    char *buff = NULL;
    int nb_lines = 0;

    if (!map_path)
        return -1;
    if (!(buff = my_load_file_in_mem(map_path)))
        return -1;
    for (int idx = 0; buff[idx] != '\0'; idx += 1)
        if (buff[idx] == '\n')
            nb_lines += 1;
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
    for (int idx = 0; idx <= nb_lines; idx += 1) {
        if (!(map[idx] = malloc(sizeof(char) * col_sizes[idx] + 1)))
            return NULL;
        if (read(fd, map[idx], col_sizes[idx] + 1) < col_sizes[idx])
            return NULL;
        map[idx][col_sizes[idx]] = '\0';
    }
    map[nb_lines + 1] = NULL;
    close(fd);
    return map;
}
