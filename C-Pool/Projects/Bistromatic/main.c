/*
** EPITECH PROJECT, 2021
** Main file for Bistromatic
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "include/bistromatic.h"
#include "include/my.h"

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

int check_operators_in_expr(char *expr)
{
    int i = 0;
    int temp = 0;
    int result = 0;

    while (expr[i] != '\0') {
        if (expr[i] == '*' || expr[i] == '/' ||
        expr[i] == '%')
            temp = 1;
        i += 1;
    }
    if (temp == 1)
        result = factors(&expr);
    else
        result = summands(&expr);
    return (result);
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        my_putstr("USAGE\n");
        my_putstr(av[0]);
        my_putstr(" base operators size_read\n\nDESCRIPTION\n- base: ");
        my_putstr("all the symbols of the base\n- operators: the symbols ");
        my_putstr("for the parentheses and the 5 operators\n");
        my_putstr("- size_read: number of characters to be read\n");
        return (EXIT_USAGE);
    }
    check_base(av[1], av[2]);
    check_ops(av[2]);
    size = my_getnbr(av[3]);
    expr = get_expr(size);
    check_expr(expr, size);
    check_div_by_o(expr);
    my_put_nbr(check_operators_in_expr(expr));
    return (EXIT_SUCCESS);
}
