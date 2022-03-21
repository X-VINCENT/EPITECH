/*
** EPITECH PROJECT, 2021
** Help File
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

int print_help(void)
{
    my_printf("USAGE\n");
    my_printf("    ./pushswap [int] [int] [int] ...\n");
    my_printf("\n");
    my_printf("DESCRIPTION\n");
    my_printf("    Pushswap is a program which sorts ");
    my_printf("integers in ascending order.\n");
    my_printf("    It sorts the integers with only some ");
    my_printf("operations (sa, sb, pa, pb ...).\n");
    my_printf("    It prints the operations in the Terminal.\n");
    return SUCCESS;
}
