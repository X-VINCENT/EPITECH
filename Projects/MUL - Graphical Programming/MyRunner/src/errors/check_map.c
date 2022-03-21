/*
** EPITECH PROJECT, 2022
** Check Map for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

int check_map(const char *filepath)
{
    char **map = load_map(filepath);

    if (!filepath)
        return ERROR;
    if (map == NULL) {
        free(map);
        return my_puterror("Invalid Map\n");
    }
    free(map);
    return SUCCESS;
}
