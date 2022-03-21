/*
** EPITECH PROJECT, 2021
** test_my_strisupper
** File description:
** Function that tests my_str_isupper
*/

#include <criterion/criterion.h>

int my_str_isupper(const char *str);

Test(my_str_isupper, test_if_the_string_is_only_upper_alphabetical)
{
    int test = my_str_isupper("HELLOWORLD");

    cr_assert_eq(test, 1);
}

Test(my_str_isupper, test_if_the_string_is_only_upper_alphabetical_1)
{
    int test = my_str_isupper("HelloWorld");

    cr_assert_eq(test, 0);
}

Test(my_str_isupper, test_if_the_string_is_only_upper_alphabetical_2)
{
    int test = my_str_isupper("");

    cr_assert_eq(test, 1);
}
