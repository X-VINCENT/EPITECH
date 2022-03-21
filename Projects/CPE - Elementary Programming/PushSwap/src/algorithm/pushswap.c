/*
** EPITECH PROJECT, 2021
** Pushswap File for Pushswap
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

int pushswap(int argc, char **argv)
{
    elt_t *l_a = create_list(my_getnbr(argv[1]));
    elt_t *l_b = malloc(sizeof(elt_t));

    if (argc == 3 && my_getnbr(argv[1]) > my_getnbr(argv[2])) {
        my_printf("sa\n");
        return free_and_return(&l_a, &l_b);
    }
    for (int i = 2; argv[i] != 0; i += 1)
        add_node(&l_a, my_getnbr(argv[i]));
    if (!(check_short_list(argv, &l_a)))
        return free_and_return(&l_a, &l_b);
    insertion_sort(&l_a, &l_b, argc);
    return free_and_return(&l_a, &l_b);
}
