/*
** EPITECH PROJECT, 2021
** Main File for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

int main(int argc, char **argv, char **arge)
{
    if (env(arge) == ERROR)
        return ERROR;
    if (argc == 2 && !(my_strcmp(argv[1], "-h")))
        return print_help();
    if (argc != 2)
        return my_puterror("Invalid Args\n\nCheck: ./my_runner -h");
    if (check_assets() == ERROR)
        return ERROR;
    if (check_map(argv[1]) == ERROR)
        return ERROR;
    return my_runner(argv[1]);
}
