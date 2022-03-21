/*
** EPITECH PROJECT, 2021
** My_Put_Get File
** File description:
** Xavier VINCENT
*/

#include "../include/my_printf.h"

void my_putchar(char c, var_t var)
{
    write(1, &c, 1);
    var.nb_of_chars += 1;
}

void my_putstr(char const *str, var_t var)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i], var);
        i += 1;
    }
}

int return_number(char const *str, int minus, int i)
{
    int nb = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        if (nb > 2147483647)
            return 0;
        if (nb == 0)
            nb = str[i] - '0';
        else {
            nb *= 10;
            nb += (str[i] - '0');
        }
        i += 1;
    }
    return nb;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int minus = 0;
    int nb = 0;

    nb = return_number(str, minus, i);
    return nb;
}
