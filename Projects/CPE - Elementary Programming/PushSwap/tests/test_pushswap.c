/*
** EPITECH PROJECT, 2021
** Test File for PushSwap
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(pushswap, basic_sorted_2_args)
{
    char *argv[] = {"./pushswap", "1", "2", 0};
    int returned_value = 0;

    returned_value = pushswap(3, argv);
    cr_assert_eq(returned_value, SUCCESS);
}

Test(pushswap, basic_unsorted_2_args, .init = cr_redirect_stdout)
{
    char *argv[] = {"./pushswap", "10", "2", 0};

    pushswap(3, argv);
    cr_assert_stdout_eq_str("sa\n");
}

Test(pushswap, first_two_args_inverted_sorted, .init = cr_redirect_stdout)
{
    char *argv[] = {"./pushswap", "2", "1", "3", "4", 0};

    pushswap(5, argv);
    cr_assert_stdout_eq_str("sa\n");
}

Test(pushswap, unsorted_list_1, .init = cr_redirect_stdout)
{
    char *argv[] = {"./pushswap", "53", "17", "87", "-435", 0};

    pushswap(5, argv);
    cr_assert_stdout_eq_str("ra ra ra pb ra pb ra pb pa pa pa\n");
}

Test(pushswap, unsorted_list_2, .init = cr_redirect_stdout)
{
    char *argv[] = {"./pushswap", "12", "54", "36", "28", 0};

    pushswap(5, argv);
    cr_assert_stdout_eq_str("pb ra ra pb ra pb pa pa pa\n");
}

Test(pushswap, two_args, .init = cr_redirect_stdout)
{
    char *argv[] = {"./pushswap", "12", "54", 0};
    int returned_value = 0;

    returned_value = pushswap(3, argv);
    cr_assert_eq(returned_value, SUCCESS);
}
