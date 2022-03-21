/*
** EPITECH PROJECT, 2021
** test_my_put_frequencies
** File description:
** Program that tests the my_put_frequencies function
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_put_frequencies, return_a_value)
{
    int returned_value = 0;
    char const *str = "Hello World";
    int nb_letter = 10;
    char letter = 'l';

    returned_value = my_put_frequencies(str, nb_letter, letter);
    cr_assert_eq(returned_value, 0);
}
