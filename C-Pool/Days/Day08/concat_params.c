/*
** EPITECH PROJECT, 2021
** concat_params.c
** File description:
** Function concat_params
*/

#include <stdlib.h>

int my_strlen(char *str);
char *my_strcat(char *dest, char const *src);

char *put_params_in_str(int argc, char **argv, char *str, int size)
{
    int i = 0;
    int j = 0;

    while (i < argc) {
        my_strcat(str, argv[i]);
        if (i == 0) {
            str[size] = '\n';
        } else {
            j += 1;
            size += my_strlen(argv[i]);
            str[size + j] = '\n';
        }
        i += 1;
    }
    str[size + j] = '\0';
    return str;
}

char *concat_params(int argc, char **argv)
{
    int h = 0;
    int length = 0;
    char *str;
    int size = my_strlen(argv[0]);

    while (h < argc) {
        length += my_strlen(argv[h]);
        h += 1;
    }
    str = malloc(length);
    put_params_in_str(argc, argv, str, size);
}
