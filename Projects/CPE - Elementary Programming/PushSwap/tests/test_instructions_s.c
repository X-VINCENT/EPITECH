/*
** EPITECH PROJECT, 2021
** Test File for Instructions S in PushSwap
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(swap_two_first, basic_test_swap_two_first)
{
    elt_t *list = create_list(0);

    add_node(&list, 1);
    swap_two_first(&list);
    cr_assert_eq(list->data, 1);
    cr_assert_eq(list->next->data, 0);
}

Test(swap_two_first, length_1_swap_two_first)
{
    elt_t *list = create_list(0);

    swap_two_first(&list);
    cr_assert_eq(list->data, 0);
}

Test(sc, basic_test_swap_two_lists)
{
    elt_t *l_a = create_list(0);
    elt_t *l_b = create_list(0);

    add_node(&l_a, 1);
    add_node(&l_b, 1);
    swap_all(&l_a, &l_b);
    cr_assert_eq(l_a->data, 1);
    cr_assert_eq(l_b->data, 1);
    cr_assert_eq(l_a->next->data, 0);
    cr_assert_eq(l_b->next->data, 0);
}
