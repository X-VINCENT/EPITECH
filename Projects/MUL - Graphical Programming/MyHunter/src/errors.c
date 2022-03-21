/*
** EPITECH PROJECT, 2021
** Handle Errors in My Hunter
** File description:
** Xavier VINCENT
*/

#include "my_hunter.h"

int print_help(void)
{
    write(1, "USAGE\n", 7);
    write(1, "    ./my_hunter\n\n", 18);
    write(1, "DESCRIPTION\n", 13);
    write(1, "My Hunter is a 2D game about hunting birds\n\n", 45);
    write(1, "Commands :\n", 12);
    write(1, "    - Press 'ESC' to quit the game\n", 36);
    write(1, "    - Press 'M' to mute the music\n\n", 36);
    write(1, "And for sure ... ENJOY !!!\n", 28);
    return 0;
}

int check_display(char *environment)
{
    char *display = "DISPLAY";

    for (int i = 0; environment[i] == display[i]; i += 1)
        if (display[i] == 'Y')
            return 1;
    return 0;
}

int env(char **arge)
{
    for (int i = 0; arge[i] != NULL; i += 1)
        if (check_display(arge[i]) == 1)
            return 1;
    return 0;
}
