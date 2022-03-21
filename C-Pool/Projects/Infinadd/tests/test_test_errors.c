/*
** EPITECH PROJECT, 2021
** Test for test_errors function
** File description:
** Test
*/

#include <criterion/criterion.h>
#include "../include/my.h"

int test_errors(char *first_str, char *second_str);

Test(test_errors, test_invalid_arguments)
{
    int returned_value = test_errors(" ", " ");

    cr_assert_eq(returned_value, 84);
}

Test(test_errors, test_argument_size)
{
    int returned_value = test_errors("", "");

    cr_assert_eq(returned_value, 84);
}

Test(test_errors, test_argument_size_2)
{
    int returned_value = test_errors("123", "");

    cr_assert_eq(returned_value, 84);
}

Test(test_errors, test_if_argument_isnum)
{
    int returned_value = test_errors("123a", "a256");

    cr_assert_eq(returned_value, 84);
}

Test(test_errors, test_if_argument_isnum_2)
{
    int returned_value = test_errors("123", "a256");

    cr_assert_eq(returned_value, 84);
}

Test(test_errors, test_if_argument_isnum_3)
{
    int returned_value = test_errors("123", "256");

    cr_assert_eq(returned_value, 0);
}
