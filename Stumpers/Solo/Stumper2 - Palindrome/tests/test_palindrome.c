/*
** EPITECH PROJECT, 2022
** Test palindrome
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "palindrome.h"

Test(palindrome, is_a_palindrome)
{
    char str[] = "saS";

    palindrome(str);
    cr_assert_stdout_eq_str("palindrome!\n");
}

Test(palindrome, is_not_a_palindrome)
{
    char str[] = "HfLOS";

    palindrome(str);
    cr_assert_stdout_eq_str("not a palindrome.\n");
}

Test(palindrome, returned_value_is_a_palindrome)
{
    int returned_value = 0;
    char str[] = "saS";

    returned_value = palindrome(str);
    cr_assert_eq(0, returned_value);
}

Test(palindrome, returned_value_is_not_a_palindrome)
{
    int returned_value = 0;
    char str[] = "HfLOS";

    returned_value = palindrome(str);
    cr_assert_eq(0, returned_value);
}
