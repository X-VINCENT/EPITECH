/*
** EPITECH PROJECT, 2022
** Test check_char
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include "palindrome.h"

Test(check_char, same_char)
{
    int returned_value = 0;
    char a = 's';
    char b = 's';

    returned_value = check_char(a, b);
    cr_assert_eq(1, returned_value);
}

Test(check_char, different_char)
{
    int returned_value = 0;
    char a = 's';
    char b = 't';

    returned_value = check_char(a, b);
    cr_assert_eq(0, returned_value);
}

Test(check_char, same_char_little_a)
{
    int returned_value = 0;
    char a = 's';
    char b = 'S';

    returned_value = check_char(a, b);
    cr_assert_eq(1, returned_value);
}

Test(check_char, same_char_big_a)
{
    int returned_value = 0;
    char a = 'S';
    char b = 's';

    returned_value = check_char(a, b);
    cr_assert_eq(1, returned_value);
}
