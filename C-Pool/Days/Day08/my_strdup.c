/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** Function my_strdup
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    int size = my_strlen(src) + 1;
    char *str;

    str = malloc(size);
    while (i < size) {
        str[i] = src[i];
        i += 1;
    }
    str[i] = '\0';
    return str;
}
