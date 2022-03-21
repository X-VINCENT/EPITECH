/*
** EPITECH PROJECT, 2021
** PushSwap Header
** File description:
** Xavier VINCENT
*/

#ifndef PUSHSWAP_H_
    #define PUSHSWAP_H_

    #include <stdlib.h>
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"
    #include "help.h"
    #include "list.h"

    #define SUCCESS 0
    #define ERROR_ARGS 84
    #define ERROR_NB 45321479

    #define ERROR_ARGS_MSG "Invalid Arguments\n\nCheck \"./pushswap -h\"\n"

int print_help(void);
int check_args(char **argv);
int pushswap(int argc, char **argv);
void swap_two_first(elt_t **list);
void swap_all(elt_t **l_a, elt_t **l_b);
void push_in_list(elt_t **src, elt_t **dest);
void rotate_list(elt_t **list);
int find_smallest(elt_t **list);
void put_smallest_first(elt_t **list);
int is_sorted(char **argv, int start);
int check_short_list(char **argv, elt_t **l_a);
void insertion_sort(elt_t **l_a, elt_t **l_b, int argc);

#endif /* !PUSHSWAP_H_ */
