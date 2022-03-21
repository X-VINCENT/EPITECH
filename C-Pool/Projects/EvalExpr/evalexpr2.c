/*
** EPITECH PROJECT, 2021
** EvalExpr 2 Project
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "include/my.h"

int my_strtol(char *str, char **endptr);

int go_next_number(char **str_ptr)
{
    int minus = 1;

    while ((!(**str_ptr >= '0' && **str_ptr <= '9')) && (**str_ptr != '\0')) {
        if (**str_ptr == '-')
            minus *= -1;
        *str_ptr += 1;
    }
    return minus;
}

int summands(char **str_ptr)
{
    int nb = 0;
    int nb2 = 0;
    int minus = 0;

    nb = my_strtol(*str_ptr, str_ptr);
    while (**str_ptr != '\0') {
        minus = go_next_number(str_ptr);
        nb2 = my_strtol(*str_ptr, str_ptr);
        if (minus == 1)
            nb += nb2;
        else
            nb -= nb2;
    }
    return nb;
}

char get_sign(char **str_ptr)
{
    char sign;

    if (**str_ptr == '*')
        sign = '*';
    if (**str_ptr == '/')
        sign = '/';
    if (**str_ptr == '%')
        sign = '%';
    *str_ptr += 1;
    return sign;
}

int calc_factors(int nb, int minus, char **str_ptr)
{
    char sign;
    int nb2 = 0;

    while (**str_ptr != '\0') {
        sign = get_sign(str_ptr);
        minus = go_next_number(str_ptr);
        nb2 = my_strtol(*str_ptr, str_ptr);
        if ((sign == '*') && (minus == 1))
            nb *= nb2;
        else if ((sign == '*') && (minus == -1))
            nb = nb * (nb2 * (-1));
        if ((sign == '/') && (minus == 1))
            nb /= nb2;
        else if ((sign == '/') && (minus == -1))
            nb = nb / (nb2 * (-1));
        if ((sign == '%') && (minus == 1))
            nb %= nb2;
    }
    return nb;
}

int factors(char **str_ptr)
{
    int nb = 0;
    int minus = 0;

    minus = go_next_number(str_ptr);
    nb = my_strtol(*str_ptr, str_ptr);
    nb *= minus;
    nb = calc_factors(nb, minus, str_ptr);
    return nb;
}
