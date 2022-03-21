/*
** EPITECH PROJECT, 2021
** Test Help for PushSwap
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(print_help, valid_test_file)
{
    int returned_value = print_help();

    cr_assert_eq(returned_value, SUCCESS);
}
