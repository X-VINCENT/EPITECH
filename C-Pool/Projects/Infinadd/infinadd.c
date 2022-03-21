/*
** EPITECH PROJECT, 2021
** Infinadd Project
** File description:
** First project in C-Pool Part 2
*/

#include <stdlib.h>
#include "include/my.h"

char *extending_str(char *str, int length);

int print_result_str(int i, int ret, char *result_str)
{
    if (ret == 1)
        result_str[i++] = '1';
    my_revstr(result_str);
    my_putstr(result_str);
    my_putchar('\n');
    return 0;
}

int calc_add(char *first_str, char *second_str, char *result_str, int length)
{
    int i = 0;
    int ret = 0;
    int tmp_nb = 0;
    int size = length - 1;

    while (i <= size) {
        tmp_nb = first_str[size - i] - '0' + second_str[size - i] - '0' + ret;
        result_str[i] = (tmp_nb % 10) + 48;
        if (tmp_nb >= 10)
            ret = 1;
        else
            ret = 0;
        i += 1;
    }
    print_result_str(i, ret, result_str);
    return 0;
}

int infinadd(char *first_str, char *second_str)
{
    int i = 0;
    int length = 0;
    char *result_str;
    int length_1 = my_strlen(first_str);
    int length_2 = my_strlen(second_str);

    if (length_1 < length_2)
        first_str = extending_str(first_str, length_2);
    else
        second_str = extending_str(second_str, length_1);
    length = my_strlen(first_str);
    result_str = malloc(sizeof(char) * (length + 1));
    calc_add(first_str, second_str, result_str, length);
    return 0;
}
