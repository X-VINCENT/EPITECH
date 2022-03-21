/*
** EPITECH PROJECT, 2022
** Basic Head
** File description:
** Stumper
*/

#include "head.h"

int basic_head(const char *filename, int nb_lines_to_print)
{
    char *buff = NULL;
    int nb_lines = 0;

    if (!filename)
        return ERROR;
    if (!(buff = load_file_in_mem(filename)))
        return 1;
    for (int idx = 0; nb_lines < nb_lines_to_print &&
        buff[idx] != '\0'; idx += 1) {
        if (buff[idx] == '\n')
            nb_lines += 1;
        my_printf("%c", buff[idx]);
    }
    free(buff);
    return SUCCESS;
}

int bytes_head(const char *filename, int nb_bytes_to_print)
{
    char *buff = NULL;

    if (!filename)
        return ERROR;
    if (!(buff = load_file_in_mem(filename)))
        return 1;
    for (int idx = 0; idx < nb_bytes_to_print && buff[idx] != '\0'; idx += 1) {
        my_printf("%c", buff[idx]);
    }
    free(buff);
    return SUCCESS;
}
