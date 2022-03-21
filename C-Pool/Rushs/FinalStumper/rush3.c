/*
** EPITECH PROJECT, 2021
** FinalStumper
** File description:
** Xavier VINCENT - Nathan MOINARD
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/rush3.h"

char *rush_file(int i, char *str, char *buff)
{
    if (buff[0] == 'o')
        str = "[rush1-1] ";
    if (buff[0] == '*' || buff[0] == '/')
        str = "[rush1-2] ";
    if ((buff[i] == 'A') && (buff[i + 1] == '\n'))
        str = "[rush1-3] ";
    return str;
}

int rush3(char *buff)
{
    int i = 0;
    int x = 0;
    int y = 0;
    char letter;
    char *str = malloc(sizeof(char) * 10);

    while (buff[x] != '\n')
        x += 1;
    while (buff[i] != '\0') {
        if (buff[i] == '\n')
            y += 1;
        str = rush_file(i, str, buff);
        i += 1;
    }
    if (buff[i - 2] == 'A')
        str = "[rush1-5] ";
    if (my_strcmp("", str) == 0)
        str = "[rush1-4] ";
    my_print_result(x, y, str);
    return 0;
}
