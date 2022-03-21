/*
** EPITECH PROJECT, 2021
** Function that prints the result of rush3
** File description:
** Xavier VINCENT - Nathan MOINARD
*/

#include "include/my.h"

int my_print_specific_result(int x, int y)
{
    my_putstr("[rush1-3] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putstr(" || ");
    my_putstr("[rush1-4] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putstr(" || ");
    my_putstr("[rush1-5] ");
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putchar('\n');
    return 0;
}

int print_str_result(int x, int y, char *str)
{
    my_putstr(str);
    my_put_nbr(x);
    my_putchar(' ');
    my_put_nbr(y);
    my_putchar('\n');
    return 0;
}

int my_print_result(int x, int y, char *str)
{
    int compare_str1 = my_strcmp("[rush1-1] ", str);
    int compare_str2 = my_strcmp("[rush1-2] ", str);

    if (compare_str1 == 0 || compare_str2 == 0) {
        print_str_result(x, y, str);
        return 0;
    }
    if (x == 1 || y == 1)
        my_print_specific_result(x, y);
    else
        print_str_result(x, y, str);
    return 0;
}
