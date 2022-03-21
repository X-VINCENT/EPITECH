/*
** EPITECH PROJECT, 2021
** Main File for BSQ
** File description:
** Xavier VINCENT
*/

#include "bsq.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        my_puterror(ERROR_ARGUMENTS_MSG);
        return ERROR_ARGUMENTS;
    }
    if (my_strcmp(argv[1], "-h") == 0) {
        my_puterror(HELP_MSG);
        my_puterror(HELP_MSG_2);
        return HELP;
    }
    if (check_file(argv[1]) == ERROR_FILE)
        return ERROR_FILE;
    if (bsq(argv[1]) == ERROR)
        return ERROR;
    return SUCCESS;
}
