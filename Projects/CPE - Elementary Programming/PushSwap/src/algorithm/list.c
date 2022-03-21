/*
** EPITECH PROJECT, 2021
** Create a list
** File description:
** Xavier VINCENT
*/

#include "list.h"

elt_t *create_list(int data)
{
    elt_t *list = malloc(sizeof(elt_t));

    list->data = data;
    list->next = NULL;
    list->previous = NULL;
    return list;
}

void add_node(elt_t **list, int data)
{
    elt_t *tmp = malloc(sizeof(elt_t));
    elt_t *tmp2 = malloc(sizeof(elt_t));

    tmp = *list;
    tmp2 = *list;
    while (tmp->next != NULL)
        tmp = tmp->next;
    elt_t *new_list = create_list(data);
    tmp->next = new_list;
    *list = tmp2;
}

int free_and_return(elt_t **list1, elt_t **list2)
{
    free(*list1);
    free(*list2);
    return SUCCESS;
}
