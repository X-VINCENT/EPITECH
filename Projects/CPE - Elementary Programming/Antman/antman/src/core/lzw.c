/*
** EPITECH PROJECT, 2022
** LZW for Antman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include "antman.h"

int lzw_encoding(const char *file_data)
{
    char **dictionnary = NULL;
    char *s = NULL;
    char c = '\0';

    if (!file_data)
        return ERROR;
    dictionnary = init_dictionnary(256);
    s = my_strncpy(s, &file_data[0], 1);
    for (unsigned int idx = 0; file_data[idx] != '\0'; idx += 1) {
        c = (file_data[idx + 1] != '\0') ? file_data[idx + 1] : '\0';
        if (!is_dictionnary(dictionnary, my_strncat(s, &c, 1)))
            s = my_strncat(s, &c, 1);
        else {
            dictionnary = add_dictionnary(dictionnary, my_strncat(s, &c, 1));
            print_code(dictionnary, s);
            s = my_strncpy(s, &c, 1);
        }
    }
    return print_and_free(dictionnary, s);
}

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

int is_dictionnary(char **dictionnary, const char *to_test)
{
    if (!dictionnary || !to_test)
        return ERROR;
    for (unsigned short idx = 0; dictionnary[idx] != NULL; idx += 1)
        if (!my_strcmp(dictionnary[idx], to_test))
            return 0;
    return 1;
}

int print_code(char **dictionnary, const char *to_print)
{
    if (!dictionnary || !to_print)
        return ERROR;
    for (unsigned short idx = 0; dictionnary[idx] != NULL; idx += 1)
        if (!my_strcmp(dictionnary[idx], to_print)) {
            write(1, &idx, 2);
            return SUCCESS;
        }
    return ERROR;
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
