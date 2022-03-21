/*
** EPITECH PROJECT, 2021
** test_my_strislower
** File description:
** Function that tests my_strislower
*/

#include <criterion/criterion.h>

int my_str_islower(const char *str);

Test(my_str_islower, test_if_the_string_is_only_lower_alphabetical)
{
    int test = my_str_islower("helloworld");

    cr_assert_eq(test, 1);
}

Test(my_str_islower, test_if_the_string_is_only_lower_alphabetical_1)
{
    int test = my_str_islower("HelloWorld");

    cr_assert_eq(test, 0);
}

Test(my_str_islower, test_if_the_string_is_only_lower_alphabetical_2)
{
    int test = my_str_islower("");

    cr_assert_eq(test, 1);
}
