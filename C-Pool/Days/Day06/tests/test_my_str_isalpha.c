/*
** EPITECH PROJECT, 2021
** test_my_str_isalpha
** File description:
** Function that tests my_str_isalpha
*/

#include <criterion/criterion.h>

int my_str_isalpha(const char *str);

Test(my_str_isalpha, test_if_the_string_is_only_alphabetical)
{
    int test = my_str_isalpha("HelloWorld");

    cr_assert_eq(test, 1);
}

Test(my_str_isalpha, test_if_the_string_is_only_alphabetical_1)
{
    int test = my_str_isalpha("Hello1World");

    cr_assert_eq(test, 0);
}

Test(my_str_isalpha, test_if_the_string_is_only_alphabetical_2)
{
    int test = my_str_isalpha("");

    cr_assert_eq(test, 1);
}
