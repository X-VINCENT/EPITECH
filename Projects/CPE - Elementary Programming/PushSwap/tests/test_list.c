/*
** EPITECH PROJECT, 2021
** Test List for PushSwap
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(create_list, test_the_creation_of_a_basic_list)
{
    elt_t *list = create_list(0);

    cr_assert_eq(list->data, 0);
    cr_assert_eq(list->previous, NULL);
    cr_assert_eq(list->next, NULL);
}

Test(add_node, test_the_adding_of_a_node)
{
    elt_t *list = create_list(0);

    add_node(&list, 1);
    cr_assert_eq(list->data, 0);
    cr_assert_eq(list->previous, NULL);
    cr_assert_eq(list->next->data, 1);
    cr_assert_eq(list->next->next, NULL);
}
