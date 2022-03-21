/*
** EPITECH PROJECT, 2022
** Init Array for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

char **load_map(const char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int nb_cols = get_nb_of_cols(filepath);
    int nb_rows = get_nb_of_rows(filepath);
    char **map = malloc(sizeof(char *) * nb_rows + 1);

    if (!filepath)
        return NULL;
    if (fd == -1) {
        free(map);
        return NULL;
    }
    for (int i = 0; i <= nb_rows; i += 1) {
        map[i] = malloc(sizeof(char) * nb_cols + 1);
        read(fd, map[i], nb_cols + 1);
        map[i][nb_cols + 1] = '\0';
    }
    return map;
}

int get_nb_of_cols(const char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int counter = 0;
    char *buff = malloc(sizeof(char) * 8193);

    if (fd == -1) {
        free(buff);
        return 0;
    }
    read(fd, buff, 8192);
    for (int i = 0; buff[i] != '\n'; i += 1)
        counter += 1;
    free(buff);
    close(fd);
    return counter;
}

int get_nb_of_rows(const char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int counter = 0;
    char *buff = malloc(sizeof(char) * 8193);

    if (fd == -1) {
        free(buff);
        return 0;
    }
    read(fd, buff, 8192);
    for (int i = 0; buff[i] != '\0'; i += 1)
        if (buff[i] == '\n')
            counter += 1;
    free(buff);
    return counter;
}
