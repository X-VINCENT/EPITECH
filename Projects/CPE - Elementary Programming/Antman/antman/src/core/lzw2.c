/*
** EPITECH PROJECT, 2022
** LZW2 for Antman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include "antman.h"

int print_and_free(char **dictionnary, char *to_print)
{
    if (!dictionnary || !to_print)
        return ERROR;
    print_code(dictionnary, to_print);
    free(to_print);
    for (int i = 0; dictionnary[i] != NULL; i += 1)
        free(dictionnary[i]);
    free(dictionnary);
    return SUCCESS;
}
