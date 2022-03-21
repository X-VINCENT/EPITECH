/*
** EPITECH PROJECT, 2022
** Main File for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int main(const int argc, const char **argv)
{
    if (!argv)
        return ERROR;
    if (argc == 2 && !my_strcmp(argv[1], "-h"))
        return print_help();
    if (argc != 2)
        return my_puterror("Invalid args. Check \"./my_sokoban -h\"\n");
    if (my_sokoban(argv[1]) == ERROR)
        return ERROR;
    return SUCCESS;
}
