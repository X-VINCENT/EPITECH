/*
** EPITECH PROJECT, 2021
** test_my_str_isnum
** File description:
** Function that test my_str_isnum
*/

#include <criterion/criterion.h>

int my_str_isnum(const char *str);

Test(my_str_isnum, test_if_the_string_is_only_digital)
{
    int test = my_str_isnum("1234526242516");

    cr_assert_eq(test, 1);
}

Test(my_str_isnum, test_if_the_string_is_only_digital_1)
{
    int test = my_str_isnum("Hello123World");

    cr_assert_eq(test, 0);
}

Test(my_str_isnum, test_if_the_string_is_only_digital_2)
{
    int test = my_str_isnum("");

    cr_assert_eq(test, 1);
}
