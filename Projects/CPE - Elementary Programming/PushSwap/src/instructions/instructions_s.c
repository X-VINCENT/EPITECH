/*
** EPITECH PROJECT, 2021
** Instructions S for PushSwap
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

void swap_two_first(elt_t **list)
{
    elt_t *tmp = malloc(sizeof(elt_t));

    tmp = *list;
    if (tmp->next == NULL)
        return;
    tmp = tmp->next;
    (*list)->next = tmp->next;
    tmp->next = *list;
    *list = tmp;
}

void swap_all(elt_t **l_a, elt_t **l_b)
{
    swap_two_first(l_a);
    swap_two_first(l_b);
}
