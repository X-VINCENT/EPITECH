/*
** EPITECH PROJECT, 2022
** Test my_strlen
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include "palindrome.h"

Test(my_strlen, empty_str)
{
    int returned_value = 0;
    char str[] = "";

    returned_value = my_strlen(str);
    cr_assert_eq(0, returned_value);
}

Test(my_strlen, basic_str)
{
    int returned_value = 0;
    char str[] = "test";

    returned_value = my_strlen(str);
    cr_assert_eq(4, returned_value);
}
