/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** Function my_strlen
*/

#include "my_ls.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
