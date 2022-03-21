/*
** EPITECH PROJECT, 2021
** Infinadd Project 2
** File description:
** First Project in C-Pool Part 2 File 2
*/

#include <stdlib.h>
#include "include/my.h"

int test_errors(char *first_str, char *second_str)
{
    int error_code = 0;

    if ((my_strlen(first_str) < 1) || (my_strlen(second_str) < 1)) {
        my_puterror("Invalid Arguments");
        return 84;
    }
    if (!(my_str_isnum(first_str)) || !(my_str_isnum(second_str))) {
        my_puterror("One of the given argument is not a number");
        return 84;
    } else
        return 0;
}

char *extending_str(char *str, int length)
{
    int i = 0;
    char *new_str = malloc(sizeof(char) * (length + 1));

    my_revstr(str);
    my_strcpy(new_str, str);
    i = my_strlen(new_str);
    while (i < length) {
        i = my_strlen(new_str);
        new_str[i] = '0';
        i += 1;
    }
    my_revstr(new_str);
    my_strcpy(str, new_str);
    return str;
}
