/*
** EPITECH PROJECT, 2022
** Check Map for My Sokoban
** File description:
** Xavier VINCENT
*/

#include "my_sokoban.h"

int check_map(const char *buff)
{
    int p = 0;
    int o = 0;
    int x = 0;

    if (!buff)
        return ERROR;
    for (int idx = 0; buff[idx] != '\0'; idx += 1) {
        if (!(buff[idx] == 'P' || buff[idx] == 'O' || buff[idx] == 'X' ||
            buff[idx] == '#' || buff[idx] == '\n' || buff[idx] == ' '))
            exit(my_puterror(
                "Invalid character in map. Check \"./my_sokoban -h\"\n"));
        if (buff[idx] == 'P')
            p += 1;
        if (buff[idx] == 'O')
            o += 1;
        if (buff[idx] == 'X')
            x += 1;
    }
    check_char_in_map(p, o, x);
    return SUCCESS;
}

int check_char_in_map(int p, int o, int x)
{
    if (p != 1)
        exit(my_puterror("Invalid Player. Check \"./my_sokoban -h\"\n"));
    if (x < o)
        exit(my_puterror("Too few boxes. Check \"./my_sokoban -h\"\n"));
    return SUCCESS;
}
