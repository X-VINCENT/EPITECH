/*
** EPITECH PROJECT, 2021
** my_list_size
** File description:
** Function my_list_size
*/

#include <stdlib.h>
#include "include/list.h"

int my_list_size(linked_list_t const *begin)
{
    int count = 0;

    while (begin->next != NULL) {
        begin = begin->next;
        count += 1;
    }
    return count;
}
