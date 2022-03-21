/*
** EPITECH PROJECT, 2021
** Test_my_extending_str
** File description:
** Function that test the extending_str function
*/

#include <criterion/criterion.h>
#include "../include/my.h"

char *extending_str(char *str, int length);

Test(extending_str, test_returned_extended_str)
{
    char *str = "123";

    str = extending_str(str, 5);
    cr_assert_str_eq(str, "00123");
}
