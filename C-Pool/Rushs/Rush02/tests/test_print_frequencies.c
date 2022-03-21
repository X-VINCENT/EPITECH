/*
** EPITECH PROJECT, 2021
** print_frequencies
** File description:
** Function that test the print_frequencies function
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(print_frequencies, return_a_value)
{
    int returned_value = 0;
    int result_int = 15;
    int result_dec = 50;
    char letter = 'a';

    returned_value = print_frequencies(result_int, result_dec, letter);
    cr_assert_eq(returned_value, 0);
}
