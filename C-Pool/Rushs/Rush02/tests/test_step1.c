/*
** EPITECH PROJECT, 2021
** test_step1
** File description:
** Program that tests the the step1 function
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(step1, return_a_value)
{
    int returned_value = 0;
    char *argv1[] = {"./a.out"};

    returned_value = step1(0, argv1);
    cr_assert_eq(returned_value, 84);
}
