/*
** EPITECH PROJECT, 2021
** Main File for Pushswap
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

int main (int argc, char **argv)
{
    if (argc == 1) {
        my_printf(ERROR_ARGS_MSG);
        return ERROR_ARGS;
    }
    if (argc == 2 && !(my_strcmp("-h", argv[1])))
        return print_help();
    if (check_args(argv) == ERROR_ARGS)
        return ERROR_ARGS;
    if (argc == 2) {
        my_printf("\n");
        return SUCCESS;
    }
    return pushswap(argc, argv);
}
