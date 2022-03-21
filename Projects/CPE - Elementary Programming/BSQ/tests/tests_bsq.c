/*
** EPITECH PROJECT, 2021
** Tests File for BSQ
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "bsq.h"

Test(check_file, check_filepath)
{
    int returned_value = check_file("tests/test_map_10_10");

    cr_assert_eq(returned_value, SUCCESS);
}

Test(check_file, unknown_map)
{
    int returned_value = check_file("tests/test_map_10_10_unknown");

    cr_assert_eq(returned_value, ERROR_FILE);
}

Test(check_file, check_wrong_map)
{
    int returned_value = check_file("tests/test_wrong_map");

    cr_assert_eq(returned_value, ERROR_INVALID_MAP_SIZE);
}

Test(handle_errors, check_invalid_size)
{
    int returned_value = handle_errors(0, 0);

    cr_assert_eq(returned_value, ERROR_INVALID_MAP_SIZE);
}

Test(handle_errors, check_invalid_size_2)
{
    int returned_value = handle_errors(1, 0);

    cr_assert_eq(returned_value, ERROR_INVALID_MAP_SIZE);
}

Test(bsq, map_10_10, .init = cr_redirect_stdout)
{
    bsq("tests/test_map_10_10");
    cr_assert_stdout_eq_str("xxxo.\nxxxo.\nxxxo.\n...o.\n...o.");
}
