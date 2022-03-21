/*
** EPITECH PROJECT, 2022
** Help File for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int print_help(void)
{
    my_printf("USAGE\n");
    my_printf("    ./my_sokoban [-h] map\n\n");
    my_printf("DESCRIPTION\n");
    my_printf("    map  file representing the warehouse map, ");
    my_printf("containing '#' for walls, \n");
    my_printf("        'P' for the player, 'X' for boxes and '0'");
    my_printf("    for storage locations.\n");
    return SUCCESS;
}
