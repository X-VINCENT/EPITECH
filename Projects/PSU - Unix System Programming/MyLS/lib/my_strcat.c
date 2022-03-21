/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** Function my_strcat
*/

#include "my_ls.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int dest_string_size = my_strlen(dest);
    char *new_str = malloc(sizeof(char) * (
        my_strlen(dest) + my_strlen(src) + 2));

    while (dest[i] != '\0') {
        new_str[i] = dest[i];
        i += 1;
    }
    new_str[i] = '/';
    i += 1;
    while (src[j] != '\0') {
        new_str[i] = src[j];
        i += 1;
        j += 1;
    }
    return new_str;
}
