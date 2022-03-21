/*
** EPITECH PROJECT, 2022
** Test LZW_Dictionnary for Giantman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "giantman.h"

Test(init_dictionnary, basic_init_dictionnary)
{
    char **dictionnary = init_dictionnary(128);

    for (unsigned short idx = 0; idx < 128; idx += 1)
        cr_assert_eq(dictionnary[idx][0], idx);
    free(dictionnary);
}

Test(is_dictionnary, basic_is_dictionnary_null_ptr)
{
    int returned_value = is_dictionnary(NULL, 0);

    cr_assert_eq(returned_value, ERROR);
}

Test(is_dictionnary, basic_is_dictionnary_false)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = is_dictionnary(dictionnary, 256);

    cr_assert_eq(returned_value, 1);
    free(dictionnary);
}

Test(is_dictionnary, basic_is_dictionnary_true)
{
    char **dictionnary = init_dictionnary(128);
    int returned_value = is_dictionnary(dictionnary, 65);

    cr_assert_eq(returned_value, 0);
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

Test(get_str_in_dict, basic_get_str_in_dict_null_ptr)
{
    char *returned_str = get_str_in_dict(NULL, 0);

    cr_assert_null(returned_str);
}

Test(get_str_in_dict, basic_get_str_in_dict_not_in_dictionnary)
{
    char **dictionnary = init_dictionnary(128);
    char *returned_str = get_str_in_dict(dictionnary, 256);

    cr_assert_null(returned_str);
    free(dictionnary);
}

Test(get_str_in_dict, basic_get_str_in_dict)
{
    char **dictionnary = init_dictionnary(128);
    char *returned_str = get_str_in_dict(dictionnary, 65);

    cr_assert_str_eq(returned_str, "A");
    free(dictionnary);
}
