/*
** EPITECH PROJECT, 2022
** Clone Map
** File description:
** Xavier VINCENT - Alex AUBRY
*/

#include "gameoflife.h"

char **clone_map(char **map)
{
    int i = 0;
    int nb_lines = 0;
    char **cloned_map = NULL;

    if (!map)
        return NULL;
    for (int idx = 0; map[idx] != NULL; idx += 1)
        nb_lines += 1;
    if (!(cloned_map = malloc(sizeof(char *) * nb_lines + 1)))
        return NULL;
    for (; map[i] != NULL; i += 1)
        if (!(cloned_map[i] = my_strcpy(map[i])))
            return NULL;
    cloned_map[i] = NULL;
    return cloned_map;
}
