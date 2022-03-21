/*
** EPITECH PROJECT, 2022
** Main File for Antman
** File description:
** Xavier VINCENT
*/

#include "antman.h"

int main(const int argc, const char **argv)
{
    if (!argv)
        return ERROR;
    if (argc == 2 && !(my_strcmp(argv[1], "-h")))
        return print_help("antman/src/errors/.help");
    if (argc != 3)
        return my_puterror("Invalid Args.\n\nCheck \"./antman/antman -h\"");
    return antman(argv[1], my_getnbr(argv[2]));
}
