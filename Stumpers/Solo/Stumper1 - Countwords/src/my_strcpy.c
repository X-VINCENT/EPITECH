/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** Function my_strcpy
*/

#include "countwords.h"

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;

    if (!dest || !src)
        return NULL;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}
