/*
** EPITECH PROJECT, 2021
** Test Check List for PushSwap
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(is_sorted, basic_list_sorted)
{
    char *argv[] = {"./pushswap", "1", "3", "4", 0};
    int returned_value = 0;

    returned_value = is_sorted(argv, 1);
    cr_assert_eq(returned_value, 0);
}

Test(is_sorted, basic_list_unsorted)
{
    char *argv[] = {"./pushswap", "4", "3", "2", "1", 0};
    int returned_value = 0;

    returned_value = is_sorted(argv, 1);
    cr_assert_eq(returned_value, 1);
}

Test(check_short_list, first_two_args_inverted)
{
    char *argv[] = {"./pushswap", "2", "1", "3", "4", 0};
    int returned_value = 0;
    elt_t *list;

    list = create_list(my_getnbr(argv[1]));
    for (int i = 2; argv[i] != 0; i += 1)
        add_node(&list, my_getnbr(argv[i]));
    returned_value = check_short_list(argv, &list);
    cr_assert_eq(returned_value, SUCCESS);
}

Test(check_short_list, not_sorted_list)
{
    char *argv[] = {"./pushswap", "2", "1", "5", "4", 0};
    int returned_value = 0;
    elt_t *list;

    list = create_list(my_getnbr(argv[1]));
    for (int i = 2; argv[i] != 0; i += 1)
        add_node(&list, my_getnbr(argv[i]));
    returned_value = check_short_list(argv, &list);
    cr_assert_eq(returned_value, 1);
}

Test(check_short_list, not_sorted_list_2)
{
    char *argv[] = {"./pushswap", "1", "2", "5", "4", 0};
    int returned_value = 0;
    elt_t *list;

    list = create_list(my_getnbr(argv[1]));
    for (int i = 2; argv[i] != 0; i += 1)
        add_node(&list, my_getnbr(argv[i]));
    returned_value = check_short_list(argv, &list);
    cr_assert_eq(returned_value, 1);
}

Test(check_short_list, not_sorted_list_3)
{
    char *argv[] = {"./pushswap", "1", "2", "-1", "5", 0};
    int returned_value = 0;
    elt_t *list;

    list = create_list(my_getnbr(argv[1]));
    for (int i = 2; argv[i] != 0; i += 1)
        add_node(&list, my_getnbr(argv[i]));
    returned_value = check_short_list(argv, &list);
    cr_assert_eq(returned_value, 1);
}
