/*
** EPITECH PROJECT, 2022
** Test Help for Giantman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "giantman.h"

Test(print_help, valid_path)
{
    int returned_value = print_help("src/errors/.help");

    cr_assert_eq(returned_value, SUCCESS);
}

Test(print_help, invalid_path)
{
    int returned_value = print_help("invalid_path");

    cr_assert_eq(returned_value, ERROR);
}
