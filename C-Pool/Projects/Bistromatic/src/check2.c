/*
** EPITECH PROJECT, 2021
** Check2 File for Bistromatic
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../include/bistromatic.h"
#include "../include/my.h"

void count_parentheses(char const *expr)
{
    int i = 0;
    int count_opened = 0;
    int count_closed = 0;

    while (expr[i] != '\0') {
        if (expr[i] == '(')
            count_opened += 1;
        if (expr[i] == ')')
            count_closed += 1;
        i += 1;
    }
    if (count_opened != count_closed) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_EXPR);
    }
}

void check_parentheses(char const *expr)
{
    int i = 0;

    while (expr[i] != '\0') {
        if (expr[i] == '(')
            break;
        if (expr[i] == ')') {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_EXPR);
        }
        i += 1;
    }
    count_parentheses(expr);
}

void check_invalid_expr(char const *expr)
{
    return;
}

void check_empty_expr(char const *expr, int size)
{
    if (my_strlen(expr) == 0 || size == 0 || (my_strlen(expr) != size)) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_EXPR);
    }
}

int check_div_by_o(char *expr)
{
    int i = 0;

    while (expr[i] != '\0') {
        if (((expr[i] == '/') || (expr[i] == '%'))
        && (expr[i + 1] == '0')) {
            my_putstr(DIVBY0_ERROR_MSG);
            exit(EXIT_DIVBY0);
        }
        i += 1;
    }
}
