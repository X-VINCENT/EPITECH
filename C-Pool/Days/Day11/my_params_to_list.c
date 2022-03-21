/*
** EPITECH PROJECT, 2021
** my_params_to_list
** File description:
** Function that put parameters given in a list
*/

#include <stdlib.h>
#include "include/list.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    linked_list_t *list = NULL;
    linked_list_t *element;

    while (i < ac) {
        element = malloc(sizeof(*element));
        element->data = data;
        element->next = *list;
        *list = element;
        i += 1;
    }
    return list;
}
