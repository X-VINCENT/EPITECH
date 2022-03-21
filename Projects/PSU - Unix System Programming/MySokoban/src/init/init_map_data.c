/*
** EPITECH PROJECT, 2022
** Init Map Data for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

map_data_t *init_map_data(const char *map_path)
{
    map_data_t *map_data = NULL;

    if (!map_path)
        return NULL;
    if (!(map_data = malloc(sizeof(map_data_t))))
        return NULL;
    if ((map_data->nb_lines = get_map_lines(map_path)) == -1)
        return NULL;
    if (!(map_data->col_sizes = get_map_col_sizes(map_path)))
        return NULL;
    if ((map_data->longest_line = get_longest_map_line(
        map_data->col_sizes)) == -1)
        return NULL;
    if (!(map_data->map = load_map(
        map_path, map_data->nb_lines, map_data->col_sizes)))
        return NULL;
    check_map(my_load_file_in_mem(map_path));
    get_nb_objects(map_data, my_load_file_in_mem(map_path));
    map_data->backup_map = backup_map(map_data->map);
    return map_data;
}

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

int get_longest_map_line(int *col_sizes)
{
    int longest_line = 0;

    if (!col_sizes)
        return -1;
    for (int idx = 0; col_sizes[idx] != '\0'; idx += 1)
        if (longest_line < col_sizes[idx])
            longest_line = col_sizes[idx];
    return longest_line;
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
