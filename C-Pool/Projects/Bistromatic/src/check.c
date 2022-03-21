/*
** EPITECH PROJECT, 2021
** Check File for Bistromatic
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../include/bistromatic.h"
#include "../include/my.h"

void check_char(char const *str1, char const *str2, int i, int j)
{
    while (str1[i] != '\0') {
        if (str1[i] == str2[j]) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_DUPLICATE);
        }
        i += 1;
    }
}

void check_duplicate_char(char const *str)
{
    int i = 1;
    int j = 0;

    while (str[j] != '\0') {
        check_char(str, str, i, j);
        j += 1;
        i = j + 1;
    }
}

void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
    check_duplicate_char(ops);
}

void check_base(char const *b, char const *o)
{
    int i = 0;
    int j = 0;

    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
    while (o[j] != '\0') {
        check_char(b, o, i, j);
        j += 1;
        i = 0;
    }
    check_duplicate_char(b);
}

void check_expr(char const *expr, int size)
{
    check_parentheses(expr);
    check_invalid_expr(expr);
    check_empty_expr(expr, size);
}
