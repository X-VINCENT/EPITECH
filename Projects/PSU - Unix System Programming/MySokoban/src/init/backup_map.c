/*
** EPITECH PROJECT, 2022
** Backup Map for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

char **backup_map(char **map)
{
    int nb_lines = 0;
    char **backup_map = NULL;

    if (!map)
        return NULL;
    for (int idx = 0; map[idx] != NULL; idx += 1)
        nb_lines += 1;
    backup_map = malloc(sizeof(char *) * nb_lines + 1);
    for (int idx = 0; map[idx] != NULL; idx += 1)
        backup_map[idx] = my_strcpy(map[idx]);
    return backup_map;
}
