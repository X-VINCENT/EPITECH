/*
** EPITECH PROJECT, 2021
** Errors File for Pushswap
** File description:
** Xavier VINCENT$
*/

#include "pushswap.h"

int check_args_bis(int i, char **argv)
{
    for (int j = 0; argv[i][j] != '\0'; j += 1) {
        if (j == 0 && argv[i][j] == '-' && argv[i][j + 1] != '\0');
        else if (argv[i][j] < '0' || argv[i][j] > '9') {
            my_printf(ERROR_ARGS_MSG);
            return ERROR_ARGS;
        }
    }
}

int check_args(char **argv)
{
    int nb = 0;

    for (int i = 1; argv[i] != 0; i += 1) {
        if (check_args_bis(i, argv) == ERROR_ARGS)
            return ERROR_ARGS;
        nb = my_getnbr(argv[i]);
        if (nb == ERROR_NB) {
            my_printf(ERROR_ARGS_MSG);
            return ERROR_ARGS;
        }
    }
}
