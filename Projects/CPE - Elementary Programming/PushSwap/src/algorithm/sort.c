/*
** EPITECH PROJECT, 2021
** Sort the List for PushSwap
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

int find_smallest(elt_t **list)
{
    elt_t *tmp = malloc(sizeof(elt_t));
    int smallest_nb = (*list)->data;

    tmp = *list;
    for (; tmp != NULL; tmp = tmp->next)
        if (tmp->data < smallest_nb)
            smallest_nb = tmp->data;
    free(tmp);
    return smallest_nb;
}

void put_smallest_first(elt_t **list)
{
    int smallest_nb = find_smallest(list);
    elt_t *tmp = *list;

    while (tmp->data != smallest_nb) {
        tmp = tmp->next;
        rotate_list(list);
        my_printf("ra ");
    }
}

void insertion_sort(elt_t **l_a, elt_t **l_b, int argc)
{
    int size_list = argc - 1;

    while (size_list != 1) {
        put_smallest_first(l_a);
        push_in_list(l_a, l_b);
        my_printf("pb ");
        size_list -= 1;
    }
    size_list = argc - 1;
    while (size_list != 2) {
        push_in_list(l_b, l_a);
        my_printf("pa ");
        size_list -= 1;
    }
    push_in_list(l_b, l_a);
    my_printf("pa\n");
}
