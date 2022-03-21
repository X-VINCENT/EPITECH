/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** Function my_strcpy
*/

#include "my_ls.h"

char *my_strcpy(char *dest, char const *src)
{
    int size = 0;

    for (size = 0; src[size] != '\0'; size += 1)
        dest[size] = src[size];
    dest[size] = '\0';
    return dest;
}
