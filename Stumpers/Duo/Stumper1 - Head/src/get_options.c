/*
** EPITECH PROJECT, 2022
** Get Options
** File description:
** Stumper
*/

#include "head.h"

options_t *get_options(const char **args)
{
    options_t *options = NULL;

    if (!args)
        return NULL;
    if (!(options = malloc(sizeof(options_t))))
        return NULL;
    for (int idx = 0; args[idx] != NULL; idx += 1) {
        if (!my_strncmp(args[idx], "--bytes=", 8))
            options->bytes = my_getnbr(args[idx] + 8);
        if (!my_strncmp(args[idx], "-c", 2))
            options->bytes = my_getnbr(args[idx] + 2);
        if (!my_strncmp(args[idx], "--lines=", 8))
            options->lines = my_getnbr(args[idx] + 8);
        if (!my_strncmp(args[idx], "-n", 2))
            options->lines = my_getnbr(args[idx] + 2);
    }
    if (get_options_2(args, options) == ERROR)
        return NULL;
    return options;
}

int get_options_2(const char **args, options_t *options)
{
    if (!args || !options)
        return ERROR;
    for (int idx = 0; args[idx] != NULL; idx += 1) {
        if (!my_strcmp(args[idx], "--quiet") ||
            !my_strcmp(args[idx], "--silent") ||
            !my_strcmp(args[idx], "-q"))
            options->quiet = 1;
        if (!my_strcmp(args[idx], "--verbose") ||
            !my_strcmp(args[idx], "-v"))
            options->verbose = 1;
    }
    return SUCCESS;
}
