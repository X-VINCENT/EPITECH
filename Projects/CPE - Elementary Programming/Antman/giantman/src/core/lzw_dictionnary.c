/*
** EPITECH PROJECT, 2022
** LZW Dictionnary for Giantman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include "giantman.h"

char **init_dictionnary(const int size)
{
    char **dictionnary = malloc(sizeof(char *) * 65535);

    if (!dictionnary)
        return NULL;
    for (unsigned short idx = 0; idx < size; idx += 1) {
        dictionnary[idx] = malloc(sizeof(char) * 2);
        dictionnary[idx][0] = idx;
        dictionnary[idx][1] = '\0';
    }
    return dictionnary;
}

int is_dictionnary(char **dictionnary, const int code_to_test)
{
    if (!dictionnary)
        return ERROR;
    for (int idx = 0; dictionnary[idx] != NULL; idx += 1)
        if (code_to_test == idx)
            return 0;
    return 1;
}

char **add_dictionnary(char **dictionnary, const char *str)
{
    unsigned short idx = 0;

    if (!dictionnary || !str)
        return NULL;
    while (dictionnary[idx] != NULL)
        idx += 1;
    dictionnary[idx] = my_strcpy(str);
    return dictionnary;
}

char *get_str_in_dict(char **dictionnary, const unsigned short old)
{
    unsigned short idx = 0;

    if (!dictionnary)
        return NULL;
    if (is_dictionnary(dictionnary, old))
        return NULL;
    while (old != idx)
        idx += 1;
    return dictionnary[idx];
}
