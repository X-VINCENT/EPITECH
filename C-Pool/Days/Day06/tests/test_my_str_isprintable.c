/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** Function that tests my_str_isprintable
*/

#include <criterion/criterion.h>

int my_str_isprintable(const char *str);

Test(my_str_isprintable, test_if_the_string_is_only_a_printable_string)
{
    int test = my_str_isprintable("Hello World 123 !");

    cr_assert_eq(test, 1);
}

Test(my_str_isprintable, test_if_the_string_is_only_a_printable_string_1)
{
    int test = my_str_isprintable("\b");

    cr_assert_eq(test, 0);
}

Test(my_str_isprintable, test_if_the_string_is_only_a_printable_string_2)
{
    int test = my_str_isprintable("");

    cr_assert_eq(test, 1);
}
