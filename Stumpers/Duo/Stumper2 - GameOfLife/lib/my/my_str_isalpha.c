/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** Function my_str_isalpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    if (!str)
        return 84;
    if (my_strlen(str) <= 0)
        return 1;
    for (int i = 0; (str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z'); i += 1)
        if (str[i + 1] == '\0')
            return 1;
    return 0;
}
