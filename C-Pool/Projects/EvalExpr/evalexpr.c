/*
** EPITECH PROJECT, 2021
** EvalExpr Project
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "include/my.h"

int my_strtol(char *str, char **endptr)
{
    int i = 0;
    int nb = 0;

    while ((**endptr >= '0' && **endptr <= '9') && (**endptr != '\0')){
        if (nb == 0)
            nb = **endptr - 48;
        else {
            nb *= 10;
            nb += (**endptr - 48);
        }
        *endptr += 1;
    }
    while ((!(**endptr == '-' || **endptr >= '(' && **endptr <= '+' ||
        **endptr == '%' || **endptr == '/')) && (**endptr != '\0')) {
        *endptr += 1;
    }
    return nb;
}
