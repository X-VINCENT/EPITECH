/*
** EPITECH PROJECT, 2022
** Main File
** File description:
** Xavier VINCENT
*/

#include "head.h"

int main(const int argc, const char **argv)
{
    int returned_value = 0;

    if (!argv)
        return ERROR;
    if (argc == 1)
        return SUCCESS;
    argv++;
    returned_value = head(argc - 1, argv);
    return returned_value;
}

int head(const int nb_args, const char **args)
{
    int returned_value = 0;
    options_t *options = NULL;
    const char *filename = NULL;

    if (!args || nb_args < 1)
        return ERROR;
    if (nb_args == 1)
        return basic_head(args[0], 10);
    for (int idx = 0; args[idx] != NULL; idx += 1) {
        if (args[idx][0] != '-')
            filename = my_strcpy(args[idx]);
    }
    if (!(options = get_options(args)))
        return ERROR;
    if (select_options(filename, options))
        return ERROR;
    return SUCCESS;
}
