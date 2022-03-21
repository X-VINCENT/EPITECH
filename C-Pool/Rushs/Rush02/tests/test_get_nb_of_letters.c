/*
** EPITECH PROJECT, 2021
** test_get_nb_of_letters
** File description:
** Programs that tests the get_nb_of_letters function
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(get_nb_of_letters, return_a_value)
{
    int returned_value = 0;
    char const *str = "Hello World";
    char letter = 'l';

    returned_value = get_nb_of_letters(str, letter);
    cr_assert_eq(returned_value, 0);
}

Test(get_nb_of_letters, return_a_value_2)
{
    int returned_value = 0;
    char const *str = "Hello World";
    char letter = 'z';

    returned_value = get_nb_of_letters(str, letter);
    cr_assert_eq(returned_value, 0);
}
