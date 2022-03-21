/*
** EPITECH PROJECT, 2021
** Main File for My_Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

int main(int argc, char **argv, char **arge)
{
    if (env(arge) == 0)
        return 84;
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h')
        return print_help();
    if (argc != 1)
        return 84;
    return my_hunter();
}
