/*
** EPITECH PROJECT, 2021
** Check Env for My Runner
** File description:
** Xavier VINCENT
*/

#include "my_runner.h"

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
