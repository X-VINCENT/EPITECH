/*
** EPITECH PROJECT, 2021
** Error Handle File for BSQ
** File description:
** Xavier VINCENT
*/

#include "bsq.h"

int check_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat stat_t;

    stat(filepath, &stat_t);
    if (fd == -1) {
        close(fd);
        my_puterror(ERROR_FILE_MSG);
        return ERROR_FILE;
    }
    if (stat_t.st_size < 4) {
        my_puterror(ERROR_INVALID_MAP_SIZE_MSG);
        return ERROR_INVALID_MAP_SIZE;
    }
    close(fd);
    return SUCCESS;
}

int handle_errors(int nb_rows, int nb_cols)
{
    if (nb_rows <= 0) {
        my_puterror(ERROR_INVALID_MAP_SIZE_MSG);
        return ERROR_INVALID_MAP_SIZE;
    }
    if (nb_cols <= 0) {
        my_puterror(ERROR_INVALID_MAP_SIZE_MSG);
        return ERROR_INVALID_MAP_SIZE;
    }
    return SUCCESS;
}
