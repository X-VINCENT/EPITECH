/*
** EPITECH PROJECT, 2021
** Instructions R for PushSwap
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

void rotate_list(elt_t **list)
{
    elt_t *tmp = malloc(sizeof(elt_t));
    elt_t *tmp2 = malloc(sizeof(elt_t));

    tmp = *list;
    *list = (*list)->next;
    tmp2 = *list;
    while (tmp2->next != NULL)
        tmp2 = tmp2->next;
    tmp2->next = tmp;
    tmp2->next->next = NULL;
    tmp->previous = tmp2;
}
