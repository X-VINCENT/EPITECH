/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** FUnction my_strcat
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, const char *src);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_string_size = my_strlen(dest);
    char *new_str = malloc(
        sizeof(char) * (my_strlen(dest) + my_strlen(src)) + 1);

    new_str = my_strcpy(new_str, dest);
    while (src[i] != '\0') {
        new_str[dest_string_size + i] = src[i];
        i += 1;
    }
    return new_str;
}
