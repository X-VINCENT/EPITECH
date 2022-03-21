/*
** EPITECH PROJECT, 2021
** Test Errors for PushSwap
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(check_args, check_valid_args)
{
    char **argv;
    int returned_value = 0;

    argv[0] = "./pushswap";
    argv[1] = "1";
    argv[2] = "-2";
    argv[3] = 0;
    returned_value = check_args(argv);
    cr_assert_eq(SUCCESS, 0);
}

Test(check_args, check_not_integers_args)
{
    char **argv;
    int returned_value = 0;

    argv[0] = "./pushswap";
    argv[1] = "a";
    argv[2] = "b";
    argv[3] = 0;
    returned_value = check_args(argv);
    cr_assert_eq(returned_value, ERROR_ARGS);
}

Test(check_args, check_minus_error_args)
{
    char **argv;
    int returned_value = 0;

    argv[0] = "./pushswap";
    argv[1] = "-";
    argv[2] = " 1";
    argv[3] = 0;
    returned_value = check_args(argv);
    cr_assert_eq(returned_value, ERROR_ARGS);
}

Test(check_args, not_int)
{
    char **argv;
    int returned_value = 0;

    argv[0] = "./pushswap";
    argv[1] = "1";
    argv[2] = "23456543456";
    argv[3] = 0;
    returned_value = check_args(argv);
    cr_assert_eq(returned_value, ERROR_ARGS);
}
