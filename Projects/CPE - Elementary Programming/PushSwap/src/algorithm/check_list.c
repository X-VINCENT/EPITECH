/*
** EPITECH PROJECT, 2021
** Check if the lsit is sorted for PushSwap
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

int is_sorted(char **argv, int start)
{
    for (int i = start + 1; argv[i] != 0; i += 1)
        if (my_getnbr(argv[i - 1]) > my_getnbr(argv[i]))
            return 1;
    return 0;
}

int check_short_list(char **argv, elt_t **l_a)
{
    if (!(is_sorted(argv, 1))) {
        my_printf("\n");
        return SUCCESS;
    }
    if (my_getnbr(argv[1]) > my_getnbr(argv[2]) && (!(is_sorted(argv, 3))) &&
        my_getnbr(argv[3]) > my_getnbr(argv[1])) {
        swap_two_first(l_a);
        my_printf("sa\n");
        return SUCCESS;
    }
    return 1;
}
