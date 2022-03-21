/*
** EPITECH PROJECT, 2021
** Instructions P File for PushSwap
** File description:
** Xavier VINCENT
*/

#include "pushswap.h"

void push_in_list(elt_t **src, elt_t **dest)
{
    elt_t *tmp = malloc(sizeof(elt_t));
    elt_t *tmp2 = malloc(sizeof(elt_t));

    tmp = *src;
    tmp2 = *dest;
    *src = (*src)->next;
    (*src)->previous = NULL;
    tmp->next = NULL;
    (*dest)->previous = tmp;
    tmp->next = *dest;
    *dest = (*dest)->previous;
}
