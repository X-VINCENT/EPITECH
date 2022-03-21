/*
** EPITECH PROJECT, 2021
** Test program for factors function
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#include <criterion/criterion.h>
#include "../include/my.h"
#include "../include/bistromatic.h"

Test(factors, return_the_product_of_a_str)
{
    int result = 0;
    char *str = "1 * 2 * 3";

    result = factors(&str);
    cr_assert_eq(result, 6);
}

Test(factors, return_the_product_of_a_str_2)
{
    int result = 0;
    char *str = "2 / 2";

    result = factors(&str);
    cr_assert_eq(result, 1);
}

Test(factors, return_the_product_of_a_str_3)
{
    int result = 0;
    char *str = "2 % 2";

    result = factors(&str);
    cr_assert_eq(result, 0);
}

Test(factors, return_the_product_of_a_str_4)
{
    int result = 0;
    char *str = "-1 * -2 * 3";

    result = factors(&str);
    cr_assert_eq(result, 6);
}

Test(factors, return_the_product_of_a_str_5)
{
    int result = 0;
    char *str = "-2 / -2";

    result = factors(&str);
    cr_assert_eq(result, 1);
}

Test(factors, return_the_product_of_a_str_6)
{
    int result = 0;
    char *str = "2 * -2";

    result = factors(&str);
    cr_assert_eq(result, -4);
}

Test(factors, return_the_product_of_a_str_7)
{
    int result = 0;
    char *str = "2 / -2";

    result = factors(&str);
    cr_assert_eq(result, -1);
}
