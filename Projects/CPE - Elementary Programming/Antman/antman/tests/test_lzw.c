/*
** EPITECH PROJECT, 2022
** Test LZW for Antman
** File description:
** Xavier VINCENT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "antman.h"

Test(lzw_encoding, basic_lzw_null_ptr)
{
    int returned_value = lzw_encoding(NULL);

    cr_assert_eq(returned_value, ERROR);
}

Test(lzw_encoding, basic_lzw_everything_ok, .init = cr_redirect_stdout)
{
    int returned_value = lzw_encoding("IMPOSSIBLE TO TEST");

    cr_assert_stdout_neq_str("IMPOSSIBLE TO TEST");
    cr_assert_eq(returned_value, SUCCESS);
}

Test(init_dictionnary, basic_init_dictionnary)
{
    char **dictionnary = init_dictionnary(128);

    for (unsigned short idx = 0; idx < 128; idx += 1)
        cr_assert_eq(dictionnary[idx][0], idx);
    free(dictionnary);
}

Test(is_dictionnary, basic_is_dictionnary_null_ptr_dictionnary)
{
    int returned_value = is_dictionnary(NULL, "STR");

    cr_assert_eq(returned_value, ERROR);
}

Test(is_dictionnary, basic_is_dictionnary_null_ptr_str)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = is_dictionnary(dictionnary, NULL);

    cr_assert_eq(returned_value, ERROR);
    free(dictionnary);
}

Test(is_dictionnary, basic_is_dictionnary_false)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = is_dictionnary(dictionnary, "NOT_IN_DICTIONNARY");

    cr_assert_eq(returned_value, 1);
    free(dictionnary);
}

Test(is_dictionnary, basic_is_dictionnary_true)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = is_dictionnary(dictionnary, "A");

    cr_assert_eq(returned_value, 0);
    free(dictionnary);
}

Test(print_code, basic_print_code_null_ptr_dictionnary)
{
    int returned_value = print_code(NULL, "STR");

    cr_assert_eq(returned_value, ERROR);
}

Test(print_code, basic_print_code_null_ptr_str)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = print_code(dictionnary, NULL);

    cr_assert_eq(returned_value, ERROR);
    free(dictionnary);
}

Test(print_code, basic_print_code_found, .init = cr_redirect_stdout)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = print_code(dictionnary, "A");

    cr_assert_stdout_neq_str("IMPOSSIBLE TO TEST");
    cr_assert_eq(returned_value, SUCCESS);
    free(dictionnary);
}

Test(print_code, basic_print_code_not_found, .init = cr_redirect_stdout)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = print_code(dictionnary, "NOT FOUND");

    cr_assert_eq(returned_value, ERROR);
    free(dictionnary);
}

Test(add_dictionnary, basic_add_dictionnary_null_ptr_dictionnary)
{
    char **returned_dictionnary = add_dictionnary(NULL, "STR");

    cr_assert_null(returned_dictionnary);
}

Test(add_dictionnary, basic_add_dictionnary_null_ptr_str)
{
    char **dictionnary = init_dictionnary(128);
    char **returned_dictionnary = add_dictionnary(dictionnary, NULL);

    cr_assert_null(returned_dictionnary);
    free(dictionnary);
}

Test(add_dictionnary, basic_add_dictionnary)
{
    char **dictionnary = init_dictionnary(128);

    dictionnary = add_dictionnary(dictionnary, "NEW_STR_1");
    dictionnary = add_dictionnary(dictionnary, "NEW_STR_2");
    dictionnary = add_dictionnary(dictionnary, "NEW_STR_3");
    dictionnary = add_dictionnary(dictionnary, "NEW_STR_4");
    dictionnary = add_dictionnary(dictionnary, "NEW_STR_5");
    cr_assert_str_eq(dictionnary[128], "NEW_STR_1");
    cr_assert_str_eq(dictionnary[129], "NEW_STR_2");
    cr_assert_str_eq(dictionnary[130], "NEW_STR_3");
    cr_assert_str_eq(dictionnary[131], "NEW_STR_4");
    cr_assert_str_eq(dictionnary[132], "NEW_STR_5");
    free(dictionnary);
}
