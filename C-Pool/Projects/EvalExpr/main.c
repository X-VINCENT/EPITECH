/*
** EPITECH PROJECT, 2021
** Evalxpr project
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include "include/my.h"

int number(char **str_ptr);
int my_strtol(char *str, char **endptr);
int summands(char **str_ptr);
int factors(char **str_ptr);

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(summands(&av[1]));
        my_putchar('\n');
        return 0;
    }
    return 84;
}
