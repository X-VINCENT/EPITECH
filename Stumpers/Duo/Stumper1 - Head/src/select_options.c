/*
** EPITECH PROJECT, 2022
** Select Options
** File description:
** Stumper
*/

#include "head.h"

int select_options(const char *filename, options_t *options)
{
    if (!options || !filename)
        return ERROR;
    if (options->verbose == 1) {
        my_printf("==> %s <==\n", filename);
        return basic_head(filename, 10);
    }
    if (options->lines >= 1)
        return basic_head(filename, options->lines);
    if (options->bytes >= 1)
        return bytes_head(filename, options->bytes);
    return SUCCESS;
}
