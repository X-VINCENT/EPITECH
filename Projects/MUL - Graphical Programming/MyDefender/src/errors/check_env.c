/*
** EPITECH PROJECT, 2022
** Check Env for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "my_defender.h"

int env(char **arge)
{
    if (!arge)
        return ERROR;
    for (int i = 0; arge[i] != NULL; i += 1)
        if (check_display(arge[i]))
            return 1;
    return my_puterror("Bad Environnement\n");
}

int check_display(char *environment)
{
    char *display = "DISPLAY";

    if (!environment)
        return ERROR;
    for (int i = 0; environment[i] == display[i]; i += 1)
        if (display[i] == 'Y')
            return 1;
    return 0;
}
