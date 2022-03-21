/*
** EPITECH PROJECT, 2022
** Main File for Giantman
** File description:
** Xavier VINCENT
*/

#include "giantman.h"

int main(const int argc, const char **argv)
{
    if (!argv)
        return ERROR;
    if (argc == 2 && !(my_strcmp(argv[1], "-h")))
        return print_help("giantman/src/errors/.help");
    if (argc != 3)
        return my_puterror("Invalid Args.\n\nCheck \"./giantman/giantman -h\"");
    return giantman(argv[1], my_getnbr(argv[2]));
}
