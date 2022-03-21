/*
** EPITECH PROJECT, 2021
** List Header
** File description:
** Xavier VINCENT
*/

#ifndef LIST_H_
    #define LIST_H_

    #include <stdlib.h>

    #define SUCCESS 0

typedef struct elt {
    int data;
    struct elt *next;
    struct elt *previous;
} elt_t;

elt_t *create_list(int data);
void add_node(elt_t **list, int data);
int free_and_return(elt_t **list1, elt_t **list2);
void swap_two_first(elt_t **list);

#endif /* !LIST_H_ */
